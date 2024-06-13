LOADLIBES+=-lm

main : .cpl/main.o             
	$(CC) $(LDFLAGS) -o main .cpl/main.o              $(LOADLIBES) $(LDLIBS)

.cpl/main.c .cpl/main.d : main.cpl matrices_utils.h dof_utils.h initial_state_utils.h math_utils.h sim_utils.h RK3_utils.h dof_utils.h f_ext_utils.h matrices_utils.h dof_utils.h output_utils.h fake_grid.h baric_utils.h