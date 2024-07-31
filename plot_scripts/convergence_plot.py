import numpy as np
import matplotlib
import matplotlib.pyplot as plt

matplotlib.rcParams['mathtext.fontset'] = 'cm'
matplotlib.rcParams['font.family'] = 'STIXGeneral'

press_max = np.genfromtxt('/media/lorenzo/Hard Disk 2/output_codice_tesi/output/press_max.csv', delimiter=',')
plt.grid(axis='y') 

plt.plot(press_max, 'k', linewidth=0.75)
plt.show()

