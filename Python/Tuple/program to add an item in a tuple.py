# Write a Python program to add an item in a tuple
tuplex = ('physics', 'chemistry', 1997, 2000)
tuple = tuplex + (5,)
print(tuple)

#2nd method
tuple = tuplex[:3] + (23,56,7)
print(tuple)

#3rd method
listx = list(tuplex)
listx.append(30)
tuplex = tuple(listx)
print(tuplex)