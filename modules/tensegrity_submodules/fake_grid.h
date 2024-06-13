INCLUDE baric_utils.h
!USE rtchecks

SUBROUTINE grid_comp_2D(ARRAY(*,*,2) OF REAL grid_points_2D^; ARRAY(*,*,2) OF INTEGER grid_pan^; ARRAY(*,3,2) OF INTEGER P_mat; ARRAY(*) OF REAL X_0; INTEGER nx_f, ny_f, nz_f, n_pan; REAL Lx, Ly, Lz)

    REAL dx, dy, dz
    dx = Lx / (nx_f-1)
    dz = Lz / (nz_f-1)

    ARRAY(3) OF REAL   bar_weights = 0
    ARRAY(2,3) OF REAL vert_pos = 0
    ARRAY(2) OF REAL position = 0
    INTEGER pan_ind = 0

    LOOP FOR i = 1 TO nx_f
        LOOP FOR j = 1 TO nz_f
            grid_points_2D(i,j,1) = (j-1)*dz
            grid_points_2D(i,j,2) = (i-1)*dx

            position = (grid_points_2D(i,j,1), grid_points_2D(i,j,2))

            bar_weights(1) = -1
            pan_ind = 0

            LOOP WHILE (bar_weights(1) < 0 OR bar_weights(2) < 0 OR bar_weights(3) < 0) AND pan_ind < n_pan
                pan_ind = pan_ind + 1

                vert_pos(1,1) = X_0(3*P_mat(pan_ind, 1, 1))
                vert_pos(2,1) = X_0(3*P_mat(pan_ind, 1, 1)-2)
                vert_pos(1,2) = X_0(3*P_mat(pan_ind, 2, 1))
                vert_pos(2,2) = X_0(3*P_mat(pan_ind, 2, 1)-2)
                vert_pos(1,3) = X_0(3*P_mat(pan_ind, 3, 1))
                vert_pos(2,3) = X_0(3*P_mat(pan_ind, 3, 1)-2)
                
                LOOP FOR m = 1 TO 3
                    IF P_mat(pan_ind, m, 2) = 1 OR P_mat(pan_ind, m, 2) = 3 OR P_mat(pan_ind, m, 2) = 4 THEN
                        vert_pos(2,m) = vert_pos(2,m) - Lx
                    END IF
                    IF P_mat(pan_ind, m, 2) = 6 OR P_mat(pan_ind,  m, 2) = 7 OR P_mat(pan_ind, m, 2) = 8 THEN
                        vert_pos(2,m) = vert_pos(2,m) + Lx
                    END IF
                    IF P_mat(pan_ind, m, 2) = 1 OR P_mat(pan_ind, m, 2) = 2 OR P_mat(pan_ind, m, 2) = 6 THEN
                        vert_pos(1,m) = vert_pos(1,m) - Lz
                    END IF
                    IF P_mat(pan_ind, m, 2) = 4 OR P_mat(pan_ind, m, 2) = 5 OR P_mat(pan_ind, m, 2) = 8 THEN
                        vert_pos(1,m) = vert_pos(1,m) + Lz
                    END IF
                REPEAT

                bar_weights = bar_coord_2D(position, vert_pos)

                IF bar_weights(1) > 0 AND bar_weights(2) > 0 AND bar_weights(3) > 0 THEN
                    grid_pan(i,j,1) = pan_ind 
                END IF
            REPEAT
        REPEAT
    REPEAT

END grid_comp_2D