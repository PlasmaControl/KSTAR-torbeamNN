#!/bin/bash
#SBATCH --job-name=torbeam     # create a short name for your job
#SBATCH --output=error_files/slurm-%A.%a.out # stdout file
#SBATCH --error=error_files/slurm-%A.%a.err  # stderr file
#SBATCH --nodes=1                # node count
#SBATCH --ntasks=1               # total number of tasks across all nodes
#SBATCH --cpus-per-task=1        # cpu-cores per task (>1 if multi-threaded tasks)
#SBATCH --mem-per-cpu=16G         # memory per cpu-core (4G is default)
#SBATCH --time=10:00:00          # total run time limit (HH:MM:SS)
#SBATCH --array=0-23             # job array with index values 0, 1, 2, 3, 4
echo "My SLURM_ARRAY_JOB_ID is $SLURM_ARRAY_JOB_ID."
echo "My SLURM_ARRAY_TASK_ID is $SLURM_ARRAY_TASK_ID"
echo "Executing on the machine:" $(hostname)

module purge
module load anaconda3/2022.5
conda activate k2c-env
python /projects/EKOLEMEN/KSTAR_torbeam/train_torbeam_nn.py