#Accessing Values in Tuples

tup1 = ('physics', 'chemistry', 1997, 2000)
tup2 = (1, 2, 3, 4, 5, 6, 7 )
print("tup1[0] : ", tup1[0])

#Updating Tuples
#Tuples are immutable which means you cannot update or change the values of tuple elements. You are able to take portions of existing tuples to create new tuples

tup1 = ('physics', 'chemistry', 1997, 2000)
tup2 = (1, 2, 3, 4, 5, 6, 7 )
tup3 = tup1 + tup2
print(tup3)

#Delete Tuple Elements
#Removing individual tuple elements is not possible
