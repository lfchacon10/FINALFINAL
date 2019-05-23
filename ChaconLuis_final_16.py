import numpy as np
import matplotlib.pylab as plt

Barco1t= 60+13 #1horas 1minutos 13segundos,
Barco2t= 28#1horas 0minutos 28segundos
Barco3t= 29#1horas 0minutos 59segundos
Barco4t= 52#1horas 0minutos 52segundos
Barco5t= 39#1horas 0minutos 39segundos
Barco6t= 120+17#1horas 2minutos 17segundos

Barco1pos=[4,100]
Barco2pos=[10,5]
Barco3pos=[12,80]
Barco4pos=[80,50]
Barco5pos=[50,50]
Barco6pos=[40,200]

plt.figure()
plt.title("Posiciones")
plt.scatter(Barco1pos[0],Barco1pos[1])
plt.scatter(Barco2pos[0],Barco2pos[1])
plt.scatter(Barco3pos[0],Barco3pos[1])
plt.scatter(Barco4pos[0],Barco4pos[1])
plt.scatter(Barco5pos[0],Barco5pos[1])
plt.scatter(Barco6pos[0],Barco6pos[1])
plt.grid()
plt.show()

x[];
y[];
Vx[];
Vy[];

def Vx(x,t):
	return x/t

def Vy(y,t):
	return y/t

steps=1000
sigma=0.1

def metro(sigma, steps):
	xi= np.random.randint(-4 , 4)
	a=[xi] #Walk
	for i in range (steps):
		xn=np.random.normal(a[-1], sigma)
		alpha= mifun(xn) / mifun(a[-1])
		#print( "Viejo ", a[-1], "Nuevo ", xn, "Alpha ", alpha)
		if( alpha >= 1):
			a.append(xn)
		else:
			beta= np.random.uniform()
			if ( beta < alpha):
				a.append(xn)
			else: a.append(a[-1])
	return a
