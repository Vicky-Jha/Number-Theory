#To check if given array is Monotonic or not

def isMonotonic(L):

	return (all(L[i] <= L[i + 1] for i in range(len(L) - 1)) or
			all(L[i] >= L[i + 1] for i in range(len(L) - 1)))


L = [6, 5, 4, 4]

print(isMonotonic(L))


