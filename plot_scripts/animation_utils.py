import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from plot_utils import plot_tens
from functools import partial

def updatefig(i, fig, q_tilde, X_0, P_mat, P_mat_per, l_b, 
              n_N, n_G, ghost_nodes, nx, ny, l_per, h, instant_jump):
    fig.clear()
    plot_tens(fig, q_tilde[:,i*instant_jump], X_0, P_mat, P_mat_per, l_b, n_N,
               n_G, ghost_nodes, nx, ny, l_per, h)


def fabric_animation(q_tilde, t, video_duration, fps, X_0,
                      P_mat, P_mat_per, l_b, n_N, n_G, 
                      ghost_nodes, nx, ny, l_per, h):
    dt = t[1] - t[0]
    T  = t[-1] - t[0]
    frame_number = int(fps * video_duration)
    frames = np.asarray(range(frame_number))
    dt_frames = T / (frame_number-1)
    instant_jump = int(dt_frames/dt)

    instant_jump = 1 ##############
    
    fig = plt.figure(figsize=(19.2, 10.8))
    anim = animation.FuncAnimation(fig, partial(updatefig, fig=fig,
                                     q_tilde=q_tilde, 
                                     X_0=X_0, P_mat=P_mat, P_mat_per=P_mat_per, l_b=l_b,
                                     n_N=n_N, n_G=n_G, ghost_nodes=ghost_nodes,
                                     nx=nx, ny=ny, l_per=l_per, h=h, 
                                     instant_jump=instant_jump),
                        frames=frames)


    anim.save("/media/lorenzo/Hard Disk 2/output_codice_tesi/output/output_media/animation.mp4", fps=fps)



