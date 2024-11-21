import numpy as np
import matplotlib
import matplotlib.pyplot as plt

matplotlib.rcParams['mathtext.fontset'] = 'cm'
matplotlib.rcParams['font.family'] = 'STIXGeneral'

#tau_hist = np.genfromtxt('/media/lorenzo/HDD/output_codice_tesi/output_turb_3/tau_hist.csv', delimiter=',')
hist_u = np.genfromtxt('./post_process/u.csv', delimiter=',')[0:-1]
hist_v = np.genfromtxt('./post_process/v.csv', delimiter=',')[0:-1]
hist_w = np.genfromtxt('./post_process/w.csv', delimiter=',')[0:-1]

u_mean = np.mean(hist_u)
v_mean = np.mean(hist_v)
w_mean = np.mean(hist_w)

u_prime = np.subtract(hist_u, u_mean*np.ones((250)))
v_prime = np.subtract(hist_v, v_mean*np.ones((250)))
w_prime = np.subtract(hist_w, w_mean*np.ones((250)))

u_prime_square = np.power(u_prime, 2*np.ones((250)))
v_prime_square = np.power(v_prime, 2*np.ones((250)))
w_prime_square = np.power(w_prime, 2*np.ones((250)))

# u_prime_square_mean = np.mean(u_prime_square)
# v_prime_square_mean = np.mean(v_prime_square)
# w_prime_square_mean = np.mean(w_prime_square)

TKE_t = 0.5 * (np.add(np.add(u_prime_square, v_prime_square), w_prime_square))


t = np.linspace(0,10,250)

plt.grid(axis='y')
plt.xlabel('$t [s]$')
plt.ylabel('$f(t)$')
plt.title("$f(t)=\\frac{1}{2}((u'(t)-\\bar{u})^2+(v'(t)-\\bar{v})^2+(w'(t)-\\bar{w})^2)$")

plt.plot(t, TKE_t[0:250], 'k', linewidth=0.75)
plt.show()

