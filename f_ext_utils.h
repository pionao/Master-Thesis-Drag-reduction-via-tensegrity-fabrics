SUBROUTINE f_ext_sub(ARRAY(*) OF REAL f_ext^; INTEGER n_N_dof; INTEGER n_N; INTEGER n_G; REAL t)

  ! REAL w = 10
  REAL A = 1

  LOOP FOR i = 1 TO FLOOR(3*(n_N-n_G)/2)
    f_ext(3*i) = A 
  REPEAT
END f_ext_sub