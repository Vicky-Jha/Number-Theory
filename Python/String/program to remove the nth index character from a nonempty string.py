#Write a Python program to remove the nth index character from a nonempty string.

def string(str,n):
      f_str = str[:n]
      l_str = str[n+1:]
      return   f_str + l_str 

print(string('Python',5))
print(string('Python',0))
print(string('Python',4))
print(string('Python',3))

#2nd method

def string(str,n):
    str1 = str[:n-1]
    str2 = str[n:]
    return  str1 + str2

print(string('Python',5))