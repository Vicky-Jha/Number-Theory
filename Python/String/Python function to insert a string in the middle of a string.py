#  Write a Python function to insert a string in the middle of a string.
# Sample function and result :
# insert_sting_middle('[[]]<<>>', 'Python') -> [[Python]]
# insert_sting_middle('{{}}', 'PHP') -> {{PHP}}

def string(str,word):
      return str[:2] + word + str[2:]

print(string('[[]]', 'Python'))
print(string('{{}}', 'PHP'))
print(string('<<>>', 'HTML'))