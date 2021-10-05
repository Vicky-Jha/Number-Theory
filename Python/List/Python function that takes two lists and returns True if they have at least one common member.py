# Write a Python function that takes two lists and returns True if they have at least one common member.
l1 = ['abc', 'xyz', 'aba', '1221'] 
l2 = ['abc', '789', 'aba', '1221'] 
def common_data(l1, l2):
 for x in l1:
      for y in l2:
            if x == y:
                  result = True
                  return result
            else:
                  return False

print(common_data(l1,l2))