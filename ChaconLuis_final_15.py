import matplotlib.pylab as plt
import numpy as np
datos = np.genfromtxt("datos.txt", delimiter=",")
#print(datos)
t= datos[:,0]
x= datos[:,1]
y= datos[:,2]
#v= datos[:,3]

plt.figure()
plt.title("Funcion ")
plt.grid()
#plt.plot(t,y)
plt.plot(x,y)
plt.xlabel("X")
plt.ylabel("Y")
plt.legend()
plt.savefig("ChaconLuis_final_15.pdf")
plt.show()


#plt.figure()
#plt.title("Velocidad ")
#plt.grid()
#plt.plot(x,v)
#plt.show()
