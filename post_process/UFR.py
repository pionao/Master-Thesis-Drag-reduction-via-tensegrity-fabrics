# Import moduli

import numpy as np
import matplotlib.pyplot as plt
import matplotlib

matplotlib.rcParams['mathtext.fontset'] = 'cm'
matplotlib.rcParams['font.family'] = 'STIXGeneral'


# Import parametri fabric


# Import posizione iniziale nodi

UFR_A = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/UFR/UFR_A.csv', delimiter=',')
UFR_B = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/UFR/UFR_B.csv', delimiter=',')
UFR_C = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/UFR/UFR_C.csv', delimiter=',')

mean_A = np.mean(UFR_A)
mean_B = np.mean(UFR_B)
mean_C = np.mean(UFR_C)

mean_A_vec = mean_A*np.ones((500))
mean_B_vec = mean_B*np.ones((500))
mean_C_vec = mean_C*np.ones((500))

print(mean_A)
print(mean_B)
print((mean_A-mean_B)/mean_A*100)

t = np.linspace(10,30,500)

# Plot angolo

fig = plt.figure()
ax = fig.add_subplot()
ax.spines['top'].set_visible(False)
ax.spines['right'].set_visible(False)

#plt.grid(axis='y')
plt.xlabel('$t$ $[s]$')
plt.ylabel('$[-]$')
#plt.title("$\\theta_1$")
plt.xlim([10,30])
#plt.ylim([2.2,3])
plt.plot(t, mean_A_vec, 'r', linewidth=1, label='$\overline{\\text{UFR}}_A$')
plt.plot(t, mean_B_vec, 'r-.', linewidth=1, label='$\overline{\\text{UFR}}_B$')
plt.plot(t, mean_C_vec, 'b-.', linewidth=1, label='$\overline{\\text{UFR}}_C$')
plt.plot(t, UFR_A, 'k', linewidth=1, label='$\\text{UFR}_A$')
plt.plot(t, UFR_B, 'k-.', linewidth=1, label='$\\text{UFR}_B$')
plt.plot(t, UFR_C, 'b-.', linewidth=1, label='$\\text{UFR}_C$')
plt.legend(loc = 'upper right')
plt.show()

