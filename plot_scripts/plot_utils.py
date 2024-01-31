import numpy as np
import matplotlib.pyplot as plt
from matplotlib import cm
from dof_utils import X_comp

def plot_tens(fig, q_tilde, X_0, P_mat, l_b, n_N, n_G, ghost_nodes,
            nx, nz, l_per):
    X = X_comp(q_tilde, X_0, l_b, n_N, n_G, ghost_nodes, nx, nz, l_per)

    n_P = np.shape(P_mat)[0]
 
    ax = fig.add_subplot(projection='3d')
    ax.set_xlim3d([0, l_per*nz+0.25*l_per])
    ax.set_ylim3d([0, l_per*nx+0.25*l_per])
    ax.set_zlim3d([0, 0.5*l_b])
    ax.set_box_aspect((l_per*nz+0.25*l_per, l_per*nx+0.25*l_per, l_b/2))
    ax.set_xlabel('z')
    ax.set_ylabel('x')
    ax.set_zlabel('y')

    ax.w_zaxis.line.set_lw(0.)
    ax.set_zticks([])

    #ax.set_axis_off()

    # for i in range(n_B):
    #     ind_A = B_con[i, 0]
    #     ind_B = B_con[i, 1]

    #     ax.plot([X[3*ind_A-1], X[3*ind_B-1]], [X[3*ind_A-3], X[3*ind_B-3]],
    #             [X[3*ind_A-2], X[3*ind_B-2]], color='blue',
    #             linewidth='0.75')
    
    #n_P = 61
    #n_N = 1

    k_value = 0.01

    for i in range(n_P):
        ind_A = P_mat[i, 0]
        ind_B = P_mat[i, 1]
        ind_C = P_mat[i, 2]

        if not((ind_A > (n_N-n_G)//2 and ind_A <= (n_N-n_G)) or (ind_B > (n_N-n_G)//2 and ind_B <= (n_N-n_G))):
            ax.plot_trisurf([X[3*ind_A-1], X[3*ind_B-1], X[3*ind_C-1]], [X[3*ind_A-3], X[3*ind_B-3], X[3*ind_C-3]],
                    [X[3*ind_A-2], X[3*ind_B-2], X[3*ind_C-2]], cmap=cm.viridis,
                       linewidth=0, antialiased=False, vmin=(1-k_value)*0.1, vmax=(1+k_value)*0.1)
        

    # for i in range(n_N):
    #     if i < (n_N-n_G)//2 or i >= (n_N-n_G):
    #         ax.scatter(X[3*i+2], X[3*i], X[3*i+1], s=0.5, color='black', 
    #                 marker='o',)

    plt.draw() 
