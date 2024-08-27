import numpy as np
import matplotlib.pyplot as plt

x=np.loadtxt("compare.txt")
plt.plot(x[:,0],x[:,1],"o", color="red", alpha=1.0,label="Trapezoid")
plt.plot(x[:,0],x[:,2],"^", color="green", alpha=1.0,label="Simpson's 1/3")
plt.plot(x[:,0],x[:,3],"D", color="blue", alpha=1.0,label="Monte-Carlo")
plt.legend()
plt.xlabel("iteration")
plt.ylabel("Integral")
plt.ylim(-0.2,1.3)
plt.savefig("comparision.pdf",dpi=600)
plt.show()