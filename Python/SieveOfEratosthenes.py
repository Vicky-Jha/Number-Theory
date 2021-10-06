import math

n = int(input("Enter the number : "))

# finding all prime numbers 
prime = [True for i in range(n + 1)]
prime[0] = prime[1] = False
i = 2

while (i <= math.sqrt(n) + 1):
    if (prime[i] == True):
        for a in range(i * 2, n + 1, i):
            prime[a] = False
    i = i + 1

# Printing all prime numbers...
print("All prime numbers smaller than the number are ")
for p in range(n + 1):
    if prime[p]:
        print (p, end = " ")
