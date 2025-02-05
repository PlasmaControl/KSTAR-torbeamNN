import pickle
import pandas as pd
import keras

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
import sklearn

df_initial = pd.read_csv("TORBEAM_all_df.csv")

def get_data(gyro='EC2', mode=-1):
    # Define your input and output columns
    input_columns = [
        'pol_ang', 'tor_ang', 'Bt_center', 'Ip', 'R0', 'Z0', 'aminor', 'betan', 
        'elong', 'li', 'volume', 
        'ne_val_0', 'ne_val_10', 'ne_val_20'
    ]

    output_columns = ['rho_pol', 'R', 'Z', 'CD_eta']

    # Load the data

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

output_names = ['rho_pol', 'R', 'Z', 'CD_eta']
num_units = 60

r2_data = {}

for gyro in ['EC2', 'EC4', 'EC5']:
    for mode in [-1, 1]:
        X_train, X_val, X_test, y_train, y_val, y_test, _, _ = get_data(gyro=gyro, mode=mode)

        if mode == -1:
            mode_name = 'xmode'
            plt_name = 'X-Mode'
        else:
            mode_name = 'omode'
            plt_name = 'O-Mode'
        model = keras.saving.load_model(f'models/{gyro}_{mode_name}_{num_units}.keras')
        y_pred = model.predict(X_test)
        with open(f'models/{gyro}_{mode_name}_{num_units}.pkl', 'rb') as f:
            training_info = pickle.load(f)

        scaler_y = training_info['scaler_y']

        y_test_plot = scaler_y.inverse_transform(y_test)
        y_pred_plot = scaler_y.inverse_transform(y_pred)

        temp = {}

        temp['y_test'] = y_test_plot
        temp['y_pred'] = y_pred_plot

        for i, output_name in enumerate(output_names):
            r2_score = sklearn.metrics.r2_score(y_test_plot[:, i], y_pred_plot[:, i])
            mae = sklearn.metrics.mean_absolute_error(y_test_plot[:, i], y_pred_plot[:, i])

            temp[f'{output_name}_r2'] = r2_score
            temp[f'{output_name}_mae'] = mae

        r2_data[f'{gyro}_{mode_name}'] = temp

with open('r2_data.pkl', 'wb') as f:
    pickle.dump(r2_data, f)