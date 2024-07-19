import math

#function which provides fourier coefficients

def fourier(size, k, signal, p, t):

    w = 2*math.pi*(1/size) 

    for i in range (size):

        p = p + signal[i]*math.cos(-w*k*i)

        t = t + signal[i]*math.sin(-w*k*i)

    print(p/size,f"{t/size}i")

# Give the inputs here:

signal = [1,2,3,4] #Please enter the value of discrete signal here
size = len(signal) #Size of signal
k=2 #Fourier coefficient index ranges from 0 to (size-1)
p=0 #Real part initialise
t=0 #Imaginary part initialise
fourier(size, k, signal, p, t)