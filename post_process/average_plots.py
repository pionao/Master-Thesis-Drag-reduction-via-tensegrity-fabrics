# Import moduli

import numpy as np
import matplotlib.pyplot as plt
import matplotlib

matplotlib.rcParams['mathtext.fontset'] = 'cm'
matplotlib.rcParams['font.family'] = 'STIXGeneral'


# Import parametri fabric


# Import posizione iniziale nodi

input_path = '/media/lorenzo/Hard Disk 2/output_codice_tesi/Variances/'

u_mean_R = np.genfromtxt(input_path + '1/u_mean_1.csv', delimiter=',')
zz_R = np.genfromtxt(input_path + '1/z_pos_1.csv', delimiter=',')
uu_R = np.genfromtxt(input_path + '1/uu_1.csv', delimiter=',')
vv_R = np.genfromtxt(input_path + '1/vv_1.csv', delimiter=',')
ww_R = np.genfromtxt(input_path + '1/ww_1.csv', delimiter=',')
uv_R = np.genfromtxt(input_path + '1/uv_1.csv', delimiter=',')
uw_R = np.genfromtxt(input_path + '1/uw_1.csv', delimiter=',')
vw_R = np.genfromtxt(input_path + '1/vw_1.csv', delimiter=',')

u_mean_S = np.genfromtxt(input_path + '2/u_mean_2.csv', delimiter=',')
zz_S = np.genfromtxt(input_path + '2/z_pos_2.csv', delimiter=',')
uu_S = np.genfromtxt(input_path + '2/uu_2.csv', delimiter=',')
vv_S = np.genfromtxt(input_path + '2/vv_2.csv', delimiter=',')
ww_S = np.genfromtxt(input_path + '2/ww_2.csv', delimiter=',')
uv_S = np.genfromtxt(input_path + '2/uv_2.csv', delimiter=',')
uw_S = np.genfromtxt(input_path + '2/uw_2.csv', delimiter=',')
vw_S = np.genfromtxt(input_path + '2/vw_2.csv', delimiter=',')

u_mean_C = np.genfromtxt(input_path + '4/u_mean_4.csv', delimiter=',')
zz_C = np.genfromtxt(input_path + '4/z_pos_4.csv', delimiter=',')
uu_C = np.genfromtxt(input_path + '4/uu_4.csv', delimiter=',')
vv_C = np.genfromtxt(input_path + '4/vv_4.csv', delimiter=',')
ww_C = np.genfromtxt(input_path + '4/ww_4.csv', delimiter=',')
uv_C = np.genfromtxt(input_path + '4/uv_4.csv', delimiter=',')
uw_C = np.genfromtxt(input_path + '4/uw_4.csv', delimiter=',')
vw_C = np.genfromtxt(input_path + '4/vw_4.csv', delimiter=',')


# Plot u_mean

fig = plt.figure()
ax = fig.add_subplot()
ax.spines['top'].set_visible(False)
ax.spines['right'].set_visible(False)

#plt.grid(axis='y')
plt.xlabel('$\\langle u\\rangle$', fontsize='25')
plt.ylabel('$z$', fontsize='25')
#plt.title("$\\theta_1$")
plt.xlim([0,20])
plt.ylim([0.5,2.51])
plt.plot(u_mean_S, zz_S, 'g', linewidth=1, label="S")
#plt.plot(u_mean_C, zz_C, 'r', linewidth=1, label="C")
plt.plot(u_mean_R, zz_R, 'k', linewidth=1, label="R")
plt.legend(loc = 'center left', fontsize='20')
plt.show()

# Plot vv

fig = plt.figure()
ax = fig.add_subplot()
ax.spines['top'].set_visible(False)
ax.spines['right'].set_visible(False)

#plt.grid(axis='y')
#plt.xlabel('$rms$')
plt.ylabel('$z$', fontsize='25')
#plt.title("$\\theta_1$")
plt.xlim([0,3])
plt.ylim([0.5,2.51])
plt.plot(np.sqrt(uu_S), zz_S, 'g', linewidth=1, label='$uu_{rms,\\text{S}}$')
plt.plot(np.sqrt(vv_S), zz_S, 'g-.', linewidth=1, label='$vv_{rms,\\text{S}}$')
plt.plot(np.sqrt(ww_S), zz_S, 'g--', linewidth=1, label='$ww_{rms,\\text{S}}$')

# plt.plot(np.sqrt(uu_C), zz_C, 'r', linewidth=1, label='$uu_{rms,\\text{C}}$')
# plt.plot(np.sqrt(vv_C), zz_C, 'r-.', linewidth=1, label='$vv_{rms,\\text{C}}$')
# plt.plot(np.sqrt(ww_C), zz_C, 'r--', linewidth=1, label='$ww_{rms,\\text{C}}$')

plt.plot(np.sqrt(uu_R), zz_R, 'k', linewidth=1, label='$uu_{rms,\\text{R}}$')
plt.plot(np.sqrt(vv_R), zz_R, 'k-.', linewidth=1, label='$vv_{rms,\\text{R}}$')
plt.plot(np.sqrt(ww_R), zz_R, 'k--', linewidth=1, label='$ww_{rms,\\text{R}}$')
plt.legend(loc = 'center right', fontsize='15')
plt.show()


# Plot uw

fig = plt.figure()
ax = fig.add_subplot()
ax.spines['top'].set_visible(False)
ax.spines['right'].set_visible(False)

#plt.grid(axis='y')
plt.xlabel('$uw$', fontsize='25')
plt.ylabel('$z$', fontsize='25')
#plt.title("$\\theta_1$")
plt.xlim([-1,1])
plt.ylim([0.5,2.51])
plt.plot(uw_S, zz_S, 'g', linewidth=1, label="S")
#plt.plot(uw_C, zz_C, 'r', linewidth=1, label="C")
plt.plot(uw_R, zz_R, 'k', linewidth=1, label="R")
plt.legend(loc = 'upper left', fontsize='20')
plt.show()



