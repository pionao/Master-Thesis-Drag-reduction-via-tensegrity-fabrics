import numpy as np
import matplotlib.pyplot as plt

r = 0.1
h = 0.1

nx = 2
ny = 2

alpha_1 = np.arctan(np.sqrt(2)-1)

T_1 = np.array(([np.cos(alpha_1), -np.sin(alpha_1), 0],
                [np.sin(alpha_1),  np.cos(alpha_1), 0],
                [               0,               0, 1]))

T_2 = np.array(([ np.cos(3/4*np.pi),-np.sin(3/4*np.pi), 0], 
                [ np.sin(3/4*np.pi), np.cos(3/4*np.pi), 0],
                [                 0,                 0, 1]))

vert_low = np.array(([np.sqrt(2)*r,            0, 0, np.sqrt(2)*r],
                        [np.sqrt(2)*r, np.sqrt(2)*r, 0,            0],
                        [           0,            0, 0,            0]))

vert_low = np.matmul(T_1, vert_low)

cell_centre_pos = np.array(([vert_low[0,0]/2],
                            [vert_low[1,0]/2],
                            [              0]))

vert_low = np.subtract(vert_low, cell_centre_pos)

vert_up = np.matmul(T_2, vert_low)

delta = np.array(([vert_up[0,0]],
                  [vert_up[1,1]],
                  [           0]))

for i in range(3):
    for j in range(4):
        vert_low[i,j] = vert_low[i,j] - delta[i]
        vert_up[i,j]  = vert_up[i,j] - delta[i]

fig = plt.figure()
ax = fig.add_subplot()

ax.set_aspect(1)

ax.scatter(vert_up[0,0],vert_up[1,0], color='black', 
                marker='o')
ax.scatter(vert_up[0,1],vert_up[1,1], color='red', 
                marker='o')
ax.scatter(vert_up[0,2],vert_up[1,2], color='green', 
                marker='o')
ax.scatter(vert_up[0,3],vert_up[1,3], color='blue', 
                marker='o')
    
plt.show()

print(vert_up)