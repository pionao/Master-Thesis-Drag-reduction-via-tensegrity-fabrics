import numpy as np

def X_comp(q_tilde, X_0, l_b, n_N, n_G, ghost_nodes, nx, nz, l_per):
    X = X_0

    for i in range((n_N-n_G)//2):
        X[3*i]   = X_0[3*i  +3*(n_N-n_G)//2] + l_b*np.sin(q_tilde[2*i+(n_N-n_G)])*np.cos(q_tilde[2*i+1+(n_N-n_G)])
        X[3*i+1] = X_0[3*i+1+3*(n_N-n_G)//2] + l_b*np.sin(q_tilde[2*i+(n_N-n_G)])*np.sin(q_tilde[2*i+1+(n_N-n_G)])
        X[3*i+2] = X_0[3*i+2+3*(n_N-n_G)//2] + l_b*np.cos(q_tilde[2*i+(n_N-n_G)])

    for i in range(n_G):
        ghost_ind  = ghost_nodes[i, 0]
        parent_ind = ghost_nodes[i, 1]
        per_dir    = ghost_nodes[i, 2]

        if per_dir == 1:
            X[3*ghost_ind-3] = X[3*parent_ind-3] - nx*l_per
            X[3*ghost_ind-2] = X[3*parent_ind-2] 
            X[3*ghost_ind-1] = X[3*parent_ind-1]
        elif per_dir == 2:
            X[3*ghost_ind-3] = X[3*parent_ind-3] 
            X[3*ghost_ind-2] = X[3*parent_ind-2]
            X[3*ghost_ind-1] = X[3*parent_ind-1] - nz*l_per
        elif per_dir == 3:
            X[3*ghost_ind-3] = X[3*parent_ind-3] 
            X[3*ghost_ind-2] = X[3*parent_ind-2]
            X[3*ghost_ind-1] = X[3*parent_ind-1] + nz*l_per
        elif per_dir == 4:
            X[3*ghost_ind-3] = X[3*parent_ind-3] + nx*l_per
            X[3*ghost_ind-2] = X[3*parent_ind-2] 
            X[3*ghost_ind-1] = X[3*parent_ind-1]

    return X
         