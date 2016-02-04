//Interview Question 1: get the most common element out of this array

#include <iostream>
#include <map>
using namespace std;

int main () 
{
	 map<int, int> mapName;

	int a[] = {1,2,3,4,5,6,7,7,7,7};
	for (int i = 9; i >= 0; i--)
	{
		//if mapName with key of the value a[i]
		if (mapName[a[i]])
		{
			//++ preincrement is more efficient than post
			++mapName[a[i]];
		}
		else
		{
			mapName[a[i]] = 1;
		}
	}
	int maxElement = 0;
	int maxCount = 0;
	// It doesn't ruin it if you pass by reference so let's do it because it is more efficient
	// This allows us to change the a array whenever we want though.
	for (const auto &pair : mapName) 
	{
		// cout << p; 
		// cout << "mapName[" << p.first << "] = " << p.second << '\n'; 
		if(pair.second > maxCount)
		{
			maxCount = pair.second;
			maxElement = pair.first;
		}
	}
	cout << "Hey good lookin' the mode number is: " << maxElement << endl;
	return 0;
}