import numpy as np
import matplotlib.pyplot as plt
from matplotlib import cm
from dof_utils import X_comp

def plot_tens(fig, q_tilde, X_0, P_mat, P_mat_per, l_b, n_N, n_G, ghost_nodes,
            nx, nz, l_per, h):
    
    k_value = 0.00006

    X = X_comp(q_tilde, X_0, l_b, n_N, n_G, ghost_nodes, nx, nz, l_per)

    n_P = np.shape(P_mat)[0]
 
    ax = fig.add_subplot(projection='3d')
    ax.set_xlim3d([-0.5*l_per, l_per*nz+0.5*l_per])
    ax.set_ylim3d([-0.5*l_per, l_per*nx+0.5*l_per])
    ax.set_zlim3d([-k_value*10, k_value*10])
    ax.set_box_aspect((l_per*nz+0.25*l_per, l_per*nx+0.25*l_per, int((l_per*nx+0.25*l_per))/3))
    ax.set_xlabel('x')
    ax.set_ylabel('y')
    ax.set_zlabel('z')
    ax.set_zticks([-10*k_value, 0.0, 10*k_value])

    #ax.w_zaxis.line.set_lw(0.)
    #ax.set_zticks([])

    #ax.set_axis_off()

    # for i in range(n_B):
    #     ind_A = B_con[i, 0]
    #     ind_B = B_con[i, 1]

    #     ax.plot([X[3*ind_A-1], X[3*ind_B-1]], [X[3*ind_A-3], X[3*ind_B-3]],
    #             [X[3*ind_A-2], X[3*ind_B-2]], color='blue',
    #             linewidth='0.75')
    
    #n_P = 61
    #n_N = 1


    for i in range(n_P - 6*2*(nz+nx+2) - 2*2*(nz+nx)): #n_P - 6*2*(nz+nx+2) - 2*2*(nz+nx)
        ind_A = P_mat[i, 0]
        ind_B = P_mat[i, 1]
        ind_C = P_mat[i, 2]

        X_A = X[3*ind_A-3] 
        X_B = X[3*ind_B-3] 
        X_C = X[3*ind_C-3] 
        Y_A = X[3*ind_A-2] - h
        Y_B = X[3*ind_B-2] - h
        Y_C = X[3*ind_C-2] - h
        Z_A = X[3*ind_A-1] 
        Z_B = X[3*ind_B-1]  
        Z_C = X[3*ind_C-1] 

        # ax.plot_trisurf([Z_A, Z_B, Z_C], [X_A, X_B, X_C],
        #         [Y_A, Y_B, Y_C], cmap=cm.viridis,
        #             linewidth=0, antialiased=False, vmin=(1-k_value)*0.1, vmax=(1+k_value)*0.1)
        ax.plot_trisurf([Z_A, Z_B, Z_C], [X_A, X_B, X_C],
                [Y_A, Y_B, Y_C], cmap="viridis",
                    linewidth=0, antialiased=False, vmin=-k_value, vmax=k_value)
    
    offset = n_P - 6*2*(nz+nx+2) - 2*2*(nz+nx)
    for i in range(6*2*(nz+nx+2) + 2*2*(nz+nx)):
        ind_A = P_mat[i+offset, 0]
        ind_B = P_mat[i+offset, 1]
        ind_C = P_mat[i+offset, 2]

        X_A = X[3*ind_A-3]
        X_B = X[3*ind_B-3]
        X_C = X[3*ind_C-3]
        Y_A = X[3*ind_A-2] - h
        Y_B = X[3*ind_B-2] - h
        Y_C = X[3*ind_C-2] - h
        Z_A = X[3*ind_A-1]  
        Z_B = X[3*ind_B-1] 
        Z_C = X[3*ind_C-1] 

        if P_mat_per[i+offset, 0] == 1:
            X_A = X_A - nx*l_per
            Z_A = Z_A - nz*l_per
        elif P_mat_per[i+offset, 0] == 2:
            Z_A = Z_A - nz*l_per
        elif P_mat_per[i+offset, 0] == 3:
            X_A = X_A - nx*l_per
        elif P_mat_per[i+offset, 0] == 4:
            X_A = X_A - nx*l_per
            Z_A = Z_A + nz*l_per
        elif P_mat_per[i+offset, 0] == 5:
            Z_A = Z_A + nz*l_per
        elif P_mat_per[i+offset, 0] == 6:
            X_A = X_A + nx*l_per
            Z_A = Z_A - nz*l_per
        elif P_mat_per[i+offset, 0] == 7:
            X_A = X_A + nx*l_per
        elif P_mat_per[i+offset, 0] == 8:
            X_A = X_A + nx*l_per
            Z_A = Z_A + nz*l_per
            
        if P_mat_per[i+offset, 1] == 1:
            X_B = X_B - nx*l_per
            Z_B = Z_B - nz*l_per
        elif P_mat_per[i+offset, 1] == 2:
            Z_B = Z_B - nz*l_per
        elif P_mat_per[i+offset, 1] == 3:
            X_B = X_B - nx*l_per
        elif P_mat_per[i+offset, 1] == 4:
            X_B = X_B - nx*l_per
            Z_B = Z_B + nz*l_per
        elif P_mat_per[i+offset, 1] == 5:
            Z_B = Z_B + nz*l_per
        elif P_mat_per[i+offset, 1] == 6:
            X_B = X_B + nx*l_per
            Z_B = Z_B - nz*l_per
        elif P_mat_per[i+offset, 1] == 7:
            X_B = X_B + nx*l_per
        elif P_mat_per[i+offset, 1] == 8:
            X_B = X_B + nx*l_per
            Z_B = Z_B + nz*l_per

        if P_mat_per[i+offset, 2] == 1:
            X_C = X_C - nx*l_per
            Z_C = Z_C - nz*l_per
        elif P_mat_per[i+offset, 2] == 2:
            Z_C = Z_C - nz*l_per
        elif P_mat_per[i+offset, 2] == 3:
            X_C = X_C - nx*l_per
        elif P_mat_per[i+offset, 2] == 4:
            X_C = X_C - nx*l_per
            Z_C = Z_C + nz*l_per
        elif P_mat_per[i+offset, 2] == 5:
            Z_C = Z_C + nz*l_per
        elif P_mat_per[i+offset, 2] == 6:
            X_C = X_C + nx*l_per
            Z_C = Z_C - nz*l_per
        elif P_mat_per[i+offset, 2] == 7:
            X_C = X_C + nx*l_per
        elif P_mat_per[i+offset, 2] == 8:
            X_C = X_C + nx*l_per
            Z_C = Z_C + nz*l_per

        ax.plot_trisurf([Z_A, Z_B, Z_C], [X_A, X_B, X_C],
                [Y_A, Y_B, Y_C], cmap="viridis",
                    linewidth=0, antialiased=False, vmin=-k_value, vmax=k_value)

    # for i in range(n_N):
    #     if i < (n_N-n_G)//2 or i >= (n_N-n_G):
    #         ax.scatter(X[3*i+2], X[3*i], X[3*i+1], s=0.5, color='black', 
    #                 marker='o',)

    plt.draw() 
