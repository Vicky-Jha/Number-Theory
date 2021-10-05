#Write a Python program to add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead. If the string length of the given string is less than 3, leave it unchanged.
# Sample String : 'abc'
# Expected Result : 'abcing'
# Sample String : 'string'
# Expected Result : 'stringly'

def string(str):
      if len(str) < 3 :
            return ' '
      elif len(str)== 3:
            return str + "ing"
      else:
            return str + "ly"

print(string('abc'))
print(string('string'))