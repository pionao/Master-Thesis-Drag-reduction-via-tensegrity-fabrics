SUBROUTINE MatMult(ARRAY(*,*) OF REAL A; ARRAY(*,*) OF REAL B; ARRAY(*,*) OF REAL C^)
    REAL sum
    LOOP FOR i = 1 TO HI1(A)
        LOOP FOR j = 1 TO HI2(B)
            sum = 0
            LOOP FOR k = 1 TO HI2(A)
                sum = sum + A(i,k)*B(k,j)
            REPEAT
            C(i,j) = sum
        REPEAT
    REPEAT
END MatMult

SUBROUTINE MatDiff(ARRAY(*,*) OF REAL A; ARRAY(*,*) OF REAL B; ARRAY(*,*) OF REAL C^)
    LOOP FOR i = 1 TO HI1(A)
        LOOP FOR j = 1 TO HI2(B)
            C(i,j) = A(i,j) - B(i,j)
        REPEAT
    REPEAT
END MatDiff
