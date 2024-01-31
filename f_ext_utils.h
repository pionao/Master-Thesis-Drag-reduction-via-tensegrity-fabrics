SUBROUTINE f_ext_sub(ARRAY(*) OF REAL f_ext^; INTEGER n_B; REAL t)

  INTEGER nx = 7, nz = 3

  REAL w = 4*PI
  REAL A = 1

  !{ind_mc = nz*(nx+1)/2-(nz-1)/2

  LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    IF i > 4*(ind_mc-1) AND i <= 4*ind_mc THEN
      f_ext(3*i-1) = A*SIN(w*t)
    ELSE
      f_ext(3*i-1) = 0
    END IF
    f_ext(3*i) = 0
  REPEAT!}

  LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = A
    f_ext(3*i-1) = 0
    f_ext(3*i) = 0
  REPEAT

END f_ext_sub