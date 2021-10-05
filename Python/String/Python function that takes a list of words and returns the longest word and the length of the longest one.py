# Write a Python function that takes a list of words and returns the longest word and the length of the longest one.
# Sample Output:
# Longest word: Exercises
# Length of the longest word: 9

words = ["loud","music","Exercises","morning"]

largest_len = 0 

for word in words:
      if largest_len < len(word):
         largest_len = len(word)
         largestWord = word
         print(largestWord)
