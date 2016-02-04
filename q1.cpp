//Interview Question 1: get the most common element out of this array

#include <iostream>
#include <map>
using namespace std;





int main () 
{
	 map<int, int> myMap;

	
	int maxElement = 0;
	int maxCount = 0;
	int a[] = {1,2,3,4,5,6,7,7,7,7};
	for (int i = 9; i >= 0; i--)
	{
		myMap[a[i]]++;

		if(maxCount < myMap[a[i]])
		{
			maxElement = a[i];
			maxCount = myMap[a[i]];
		}
	}
	cout << "Hey good lookin' the mode number is: " << maxElement << endl;
	return 0;
}






























// int main () 
// {
// 	 map<int, int> myMap;

// 	int a[] = {1,2,3,4,5,6,7,7,7,7};
// 	for (int i = 9; i >= 0; i--)
// 	{
// 		//if myMap with key of the value a[i]
// 		if (myMap[a[i]])
// 		{
// 			//++ preincrement is more efficient than post
// 			++myMap[a[i]];
// 		}
// 		else
// 		{
// 			myMap[a[i]] = 1;
// 		}
// 	}
// 	int maxElement = 0;
// 	int maxCount = 0;
// 	// It doesn't ruin it if you pass by reference so let's do it because it is more efficient
// 	// This allows us to change the a array whenever we want though.
// 	for (const auto &pair : myMap) 
// 	{
// 		// cout << p; 
// 		// cout << "myMap[" << p.first << "] = " << p.second << '\n'; 
// 		if(pair.second > maxCount)
// 		{
// 			maxCount = pair.second;
// 			maxElement = pair.first;
// 		}
// 	}
// 	cout << "Hey good lookin' the mode number is: " << maxElement << endl;
// 	return 0;
// }