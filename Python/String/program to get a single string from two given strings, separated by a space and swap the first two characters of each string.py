#Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string. 
# Sample String : 'abc', 'xyz'
# Expected Result : 'xyc abz'

def string(m,n):
     str1 = n[0:2] + m[-1:]
     str2 = m[0:2] + n[-1:]
     
     return str1 + " " + str2

print(string('abc', 'xyz'))

#2nd method
m='abc'
n='xyz'
str1 = n[0:2] + m[-1:]
str2 = m[0:2] + n[-1:]

print(str1 + " " + str2)