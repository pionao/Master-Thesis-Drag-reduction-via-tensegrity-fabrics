# Import moduli

import numpy as np
from plot_utils import plot_tens
import matplotlib.pyplot as plt
from animation_utils import fabric_animation

# Definizione parametri video

fps            = 25
video_duration = 10.0 # In seconds


# Import parametri fabric

par_int_arr = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_parameters/par_int_arr.csv', delimiter=',', dtype='int')
nx        = par_int_arr[0]
nz        = par_int_arr[1]
n_C       = par_int_arr[2]
n_B       = par_int_arr[3]
n_T       = par_int_arr[4]
n_G       = par_int_arr[5]
n_N       = par_int_arr[6]
n_N_dof   = par_int_arr[7]
n_T_dof   = par_int_arr[8]
n_q_tilde = par_int_arr[9]

par_real_arr = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_parameters/par_real_arr.csv', delimiter=',')
l_b   = par_real_arr[0]
l_per = par_real_arr[1]

h = 0.51


# Import massimo displacement

disp_max = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/P_mat_per.csv', delimiter=',', dtype='int')

# Import posizione iniziale nodi

X_0 = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/X_0.csv', delimiter=',')


# Import matrici conettività

P_mat     = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/P_mat.csv', delimiter=',', dtype='int')
P_mat_per = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/P_mat_per.csv', delimiter=',', dtype='int')


# Import informazioni nodi ghost

ghost_nodes = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/ghost_nodes.csv', delimiter=',', dtype='int')


# Import dei risultati

t       = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/t_vec.csv', delimiter=',')
#q_tilde = np.genfromtxt('./output/q_tilde.csv', delimiter=',')
n_t = np.shape(t)[0]
q_tilde = np.zeros((n_q_tilde, n_t))
for i in range(n_t):
    file_name = '/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/time_serie/q_tilde_' + str(i+1) + '.csv'
    q_tilde[:,i] = np.genfromtxt(file_name, delimiter=',')


# Prova plot fabric

# fig = plt.figure()
# plot_tens(fig, q_tilde[:, 240], X_0, P_mat, P_mat_per, l_b, n_N, n_G, ghost_nodes, nx, nz,
#            l_per, h)
# plt.show()


# Animazione

fabric_animation(q_tilde, t, video_duration, fps, X_0,
                      P_mat, P_mat_per, l_b, n_N, n_G, 
                      ghost_nodes, nx, nz, l_per, h)


