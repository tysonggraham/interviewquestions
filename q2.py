#Find the biggest difference in the following array: should be 6
#3 answers to this, the bad, the good, and the best. All are correct

#*************************************************************************
#* The Bad! But still correct...
#*************************************************************************
exampleArray = [7,8,2,3];

difference = 0
tempDifference = 0
for i in range(len(exampleArray)):
	for j in range(len(exampleArray)):
		tempDifference = exampleArray[i] - exampleArray[j]
		if (difference < tempDifference):
			difference = tempDifference
print(difference)

#*************************************************************************
#* The Good.. How can we improve on the bad?
# Instead of looking at all solutions, just look for the largest 
# and smallest numbers!
# in our sorted array we take the last element and subtract it by the first
# element
# [-1] is the last element, [0] is the first element
#*************************************************************************
sorted_array = sorted(exampleArray)
print (sorted_array[-1] - sorted_array[0])


#*************************************************************************
#* The Best! Just grab the max and min as we go then calc difference.
#*************************************************************************
maxNum = exampleArray[0]
minNum = exampleArray[0]
for curNumInArray in exampleArray:
	if (curNumInArray < minNum):
		minNum = curNumInArray
	elif (curNumInArray > maxNum):
		maxNum = curNumInArray
print ((maxNum - minNum))