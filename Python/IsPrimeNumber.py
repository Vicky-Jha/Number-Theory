# Program to check if a number is prime or not

num = int(input('Enter a number:'))

for i in range(2, num//2):
    if (num % i) == 0:
        print(num,'is not a prime number')
        break
else:
    print(num,'is a prime number')
