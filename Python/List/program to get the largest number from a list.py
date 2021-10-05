# Write a Python program to get the largest number from a list.

def largest(list):
      max = list[0]
      for x in list:
           if x > max:
                 max = x
      return max


def smallest(list):
      min = list[0]
      for x in list:
           if min > x:
                 min = x
      return min
print(f"The Largest number in the list is {largest([1,5,7,9,4,3,2])}")
print(f"The Smallest number in the list is {smallest([1,5,7,9,4,3,2])}")

