# Import moduli

import numpy as np
from plot_utils import plot_tens
import matplotlib.pyplot as plt
from animation_utils import fabric_animation

# Definizione parametri video

fps            = 30
video_duration = 1.0 # In seconds


# Import parametri fabric

par_int_arr = np.genfromtxt('./output/par_int_arr.csv', delimiter=',', dtype='int')
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

par_real_arr = np.genfromtxt('./output/par_real_arr.csv', delimiter=',')
l_b   = par_real_arr[0]
l_per = par_real_arr[1]


# Import posizione iniziale nodi

X_0 = np.genfromtxt('./output/X_0.csv', delimiter=',')

# Import matrici conettività

B_con = np.genfromtxt('./output/B_con.csv', delimiter=',', dtype='int')
T_con = np.genfromtxt('./output/T_con.csv', delimiter=',', dtype='int')


# Import informazioni nodi ghost

ghost_nodes = np.genfromtxt('./output/ghost_nodes.csv', delimiter=',', dtype='int')


# Import dei risultati

t       = np.genfromtxt('./output/t.csv', delimiter=',')
q_tilde = np.genfromtxt('./output/q_tilde.csv', delimiter=',')


# Prova plot fabric

# plot_tens(q_tilde[:,-1], X_0, B_con, T_con, l_b, n_N, n_G, ghost_nodes, nx, nz,
#            l_per)
# plt.show()


# Animazione

fabric_animation(q_tilde, t, video_duration, fps, X_0,
                      B_con, T_con, l_b, n_N, n_G, 
                      ghost_nodes, nx, nz, l_per)