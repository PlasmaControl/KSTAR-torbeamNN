import pandas as pd
import numpy as np
from sklearn.preprocessing import StandardScaler
import tensorflow as tf
import keras
from sklearn.model_selection import train_test_split
from keras.models import Sequential
from keras.layers import Dense, Input
from keras.optimizers import Adam
from tensorboard.plugins.hparams import api as hp
import os
import pickle
idx = int(os.environ["SLURM_ARRAY_TASK_ID"])

run_name = "run-%d" % idx
logdir = '/home/ar0535/logs/hparam_tuning/' + run_name

output_columns = ['rho_pol', 'R', 'Z', 'CD_eta']

def get_data(gyro='EC2', mode=-1):
    # Define your input and output columns
    input_columns = [
        'pol_ang', 'tor_ang', 'Bt_center', 'Ip', 'R0', 'Z0', 'aminor', 'betan', 
        'elong', 'li', 'volume', 
        'ne_val_0', 'ne_val_10', 'ne_val_20'
    ]

    output_columns = ['rho_pol', 'R', 'Z', 'CD_eta']

    # Load the data
    df_initial = pd.read_csv("TORBEAM_all_df.csv")  # replace with your CSV file path

    # Narrow down to a specific gyro and mode
    temp = df_initial[df_initial['gyro'] == gyro]
    temp = temp[temp['mode'] == mode]
    # Remove rho_pol of -1
    temp = temp[temp['rho_pol'] != -1]
    df = temp.dropna()

    # Extract input features and output targets
    X = df[input_columns].values
    y = df[output_columns].values

    # Optional: Perform a train-validation-test split
    X_train, X_temp, y_train, y_temp = train_test_split(X, y, test_size=0.2, random_state=42)
    X_val, X_test, y_val, y_test   = train_test_split(X_temp, y_temp, test_size=0.5, random_state=42)

    # Optional: Normalize features (recommended for neural networks)
    scaler_X = StandardScaler()
    X_train = scaler_X.fit_transform(X_train)
    X_val = scaler_X.transform(X_val)
    X_test = scaler_X.transform(X_test)

    # If desired, you can also scale the outputs, especially if their ranges differ significantly.
    scaler_y = StandardScaler()
    y_train = scaler_y.fit_transform(y_train)
    y_val = scaler_y.transform(y_val)
    y_test = scaler_y.transform(y_test)

    return X_train, X_val, X_test, y_train, y_val, y_test, scaler_X, scaler_y

def train_test_model(hparams):
    X_train, X_val, X_test, y_train, y_val, y_test, scaler_X, scaler_y = get_data(gyro=hparams[HP_GYRO], mode=hparams[HP_MODE])

    model = Sequential()
    num_units = hparams[HP_NUM_UNITS]
    model.add(Input(shape=(X_train.shape[1],)))
    model.add(Dense(num_units, activation='relu'))
    model.add(Dense(num_units, activation='relu'))
    model.add(Dense(num_units, activation='relu'))
    model.add(Dense(len(output_columns), activation='linear'))  # linear output for regression

    model.compile(
        optimizer=Adam(learning_rate=10.0**-3),
        loss='mse',
        metrics=['mae'],
    )

    # Stop training if validation loss does not improve for 1 epoch
    early_stopping = keras.callbacks.EarlyStopping(
        monitor='val_loss',
        patience=250,
        verbose=1,
        restore_best_weights=True
    )    

    history = model.fit(X_train, y_train, 
              epochs=100000,
              validation_data=(X_val, y_val),
              batch_size=750,
              callbacks=[
                        tf.keras.callbacks.TensorBoard(logdir),  # log metrics
                        hp.KerasCallback(logdir, hparams),  # log hparams
                        early_stopping,
              ],
              verbose=1,
    )
    _, accuracy = model.evaluate(X_test, y_test)
    return model, accuracy, history, scaler_X, scaler_y

def run(run_dir, hparams):
    with tf.summary.create_file_writer(run_dir).as_default():
        hp.hparams(hparams)  # record the values used in this trial
        model, accuracy, history, scaler_X, scaler_y = train_test_model(hparams)
        tf.summary.scalar(METRIC_ACCURACY, accuracy, step=1)
    output = {
        'accuracy': accuracy,
        'history': history,
        'scaler_X': scaler_X,
        'scaler_y': scaler_y,
    }
    if hparams[HP_MODE] == -1:
        mode_str = 'xmode'
    else:
        mode_str = 'omode'
    fn = f'/projects/EKOLEMEN/KSTAR_torbeam/models/{hparams[HP_GYRO]}_{mode_str}_{hparams[HP_NUM_UNITS]}.pkl'
    with open(fn, 'wb') as f:
        pickle.dump(output, f)
    model.save(fn.replace('.pkl', '.keras'))
    model.save(fn.replace('.pkl', '.h5'))

METRIC_ACCURACY = 'mse'

HP_GYRO = hp.HParam('gyro', hp.Discrete(['EC2', 'EC4', 'EC5']))
HP_MODE = hp.HParam('mode', hp.Discrete([-1, 1,]))
HP_NUM_UNITS = hp.HParam('num_units', hp.Discrete([60, 80, 100, 120]))

hparams = {
    HP_GYRO: HP_GYRO.domain.values[idx % len(HP_GYRO.domain.values)],
    HP_MODE: HP_MODE.domain.values[idx // len(HP_GYRO.domain.values) % len(HP_MODE.domain.values)],
    HP_NUM_UNITS: HP_NUM_UNITS.domain.values[idx // len(HP_GYRO.domain.values) // len(HP_MODE.domain.values) % len(HP_NUM_UNITS.domain.values)],
}
run_name = "run-%d" % idx
print('--- Starting trial: %s' % run_name, flush=True)
print({h.name: hparams[h] for h in hparams}, flush=True)
run(logdir, hparams)