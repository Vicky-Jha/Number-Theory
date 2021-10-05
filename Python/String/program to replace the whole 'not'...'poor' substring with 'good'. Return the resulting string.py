#Write a Python program to find the first appearance of the substring 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the whole 'not'...'poor' substring with 'good'. Return the resulting string. Go to the editor
# Sample String : 'The lyrics is not that poor!'
# 'The lyrics is poor!'
# Expected Result : 'The lyrics is good!'
# 'The lyrics is poor!'

str1 = "The lyrics is not that poor!"
str2 = "The lyrics is poor!"

new_a = str1.replace("not that poor","good")

print(new_a + "\n" + str2)
