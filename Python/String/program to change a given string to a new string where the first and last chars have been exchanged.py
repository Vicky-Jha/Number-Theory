#Write a Python program to change a given string to a new string where the first and last chars have been exchanged.

old_str = "Janhvi"
# [new_str = "ianhvJ"]

new_str = old_str[-1:] + old_str[1:5] + old_str[:1]

print(new_str)

#2nd method
def string(str):
   str1 = str[-1:]
   str2 = str[1:5]
   str3 = str[:1]
   return str1 + str2 + str3

print(string('python'))