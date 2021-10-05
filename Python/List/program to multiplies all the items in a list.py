# Write a Python program to multiplies all the items in a list.
def multiply_list(items):
    multiply_numbers = 1
    for x in items:
        multiply_numbers *= x
    return multiply_numbers
print(multiply_list([5,2,-8]))