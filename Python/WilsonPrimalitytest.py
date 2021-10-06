def fact(p):
     
    if (p <= 1):
        return 1
 
    return p * fact(p - 1)
 
# Wilson's primality check
def isPrime(p):
     
    if (p == 4):
        return 0
         
    return (fact(p >> 1) % p)
 
if (isPrime(127) == 0):
    print(0)
else:
    print(1)
