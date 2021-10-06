
# This program is to check if the given array is sorted or not, it further checks
# if it is ascending or the decending order, in which it is sorted

s = []  # initilizing empty list

n = (int(input()))  # enter number of elements in array

for i in range(0, n):
    ele = (int(input()))
    s.append(ele)

ascend = 1
decend = 1
i = 0
while((ascend or decend) and i < n-1):
    if(s[i] < s[i+1]):
        decend = False
    if(s[i] > s[i+1]):
        ascend = False
    i = i+1

if (ascend):
    print("The array is sorted in ascending order \n")
elif (decend):
    print("The array is sorted in descending order.\n")
else:
    print("The array is not sorted.\n")
