# Write a Python program to get a string made of the first 2 and the last 2 chars from a given a string. If the string length is less than 2, return instead of the empty string. 
# Sample String : 'hacktoberfest'
# Expected Result : 'hast'
# Sample String : 'ha'
# Expected Result : 'haha'
# Sample String : ' h'
# Expected Result : Empty String

def string(str):
      if len(str) < 2:
            return 'Empty string'

      return str[0:2] + str[-2:]

print(string('hacktoberfest'))
print(string('ha'))
print(string('h'))
