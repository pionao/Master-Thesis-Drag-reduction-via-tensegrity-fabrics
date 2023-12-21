SUBROUTINE X_dot_comp(ARRAY(*) OF REAL X_dot^; INTEGER n_N_dof; INTEGER n_N; INTEGER n_G; REAL l_b; ARRAY(*) OF REAL q_tilde; ARRAY(*,*) OF INTEGER ghost_nodes)

    LOOP FOR i = 1 TO FLOOR((n_N-n_G)/2)
        X_dot(3*i-2) = l_b*[COS(q_tilde(2*i-1+(n_N-n_G)))*COS(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i-1)-SIN(q_tilde(2*i-1+(n_N-n_G)))*SIN(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i)]
        X_dot(3*i-1) = l_b*[COS(q_tilde(2*i-1+(n_N-n_G)))*SIN(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i-1)+SIN(q_tilde(2*i-1+(n_N-n_G)))*COS(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i)]
        X_dot(3*i)   = -l_b*SIN(q_tilde(2*i-1+(n_N-n_G)))*q_tilde(2*i-1)
    REPEAT

    LOOP FOR i = 1 TO n_G
        ghost_ind  = ghost_nodes(i, 1)
        parent_ind = ghost_nodes(i, 2)

        X_dot(3*ghost_ind-2) = X_dot(3*parent_ind-2)
        X_dot(3*ghost_ind-1) = X_dot(3*parent_ind-1)
        X_dot(3*ghost_ind)   = X_dot(3*parent_ind)
    REPEAT
END X_dot_comp


SUBROUTINE X_comp(ARRAY(*) OF REAL X^; INTEGER n_N_dof; INTEGER n_N; INTEGER n_G; INTEGER nx; INTEGER ny; REAL l_per; REAL l_b; ARRAY(*) OF REAL q_tilde; ARRAY(*) OF REAL X_0; ARRAY(*,*) OF INTEGER ghost_nodes)

    X = X_0

    LOOP FOR i = 1 TO FLOOR((n_N-n_G)/2)
        X(3*i-2) = X_0(3*i-2+3*FLOOR((n_N-n_G)/2)) + l_b*SIN(q_tilde(2*i-1+(n_N-n_G)))*COS(q_tilde(2*i+(n_N-n_G)))
        X(3*i-1) = X_0(3*i-1+3*FLOOR((n_N-n_G)/2)) + l_b*SIN(q_tilde(2*i-1+(n_N-n_G)))*SIN(q_tilde(2*i+(n_N-n_G)))
        X(3*i)   = X_0(3*i  +3*FLOOR((n_N-n_G)/2)) + l_b*COS(q_tilde(2*i-1+(n_N-n_G)))
    REPEAT
    
    LOOP FOR i = 1 TO n_G
        ghost_ind  = ghost_nodes(i, 1)
        parent_ind = ghost_nodes(i, 2)
        per_dir    = ghost_nodes(i, 3)

        IF per_dir = 1 THEN
            X(3*ghost_ind-1) = X_0(3*parent_ind-1) - ny*l_per
        ELSE IF per_dir = 2 THEN
            X(3*ghost_ind-2) = X_0(3*parent_ind-2) - nx*l_per
        ELSE IF per_dir = 3 THEN
            X(3*ghost_ind-2) = X_0(3*parent_ind-2) + nx*l_per
        ELSE IF per_dir = 4 THEN
            X(3*ghost_ind-1) = X_0(3*parent_ind-1) + ny*l_per
        END IF
    REPEAT
END X_comp