# Iterative function to calculate `pow(x, n)` using binary operators in logN time complexity
def power(x, n):
 
    pow = 1
 
    # loop till `n` become 0
    while n:
 
        # if `n` is odd, multiply the result by `x`
        if n & 1:
            pow *= x
 
        n = n >> 1
 
        x = x * x
 
    return pow
 
 
if __name__ == '__main__':
 
    x = -2
    n = 10
 
    print(f'pow({x}, {n}) =', power(x, n))
 
