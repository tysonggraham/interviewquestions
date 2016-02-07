#include <iostream>
using namespace std;

int main() 
{

	//Set a and b to 1 because it becomes normalized after the second term. 0 + 0 simply wouldn't work
	unsigned int a = 1, b = 1, fib, endToAvoidOverflow = 48;

	for (unsigned int n = 3; n <= endToAvoidOverflow; ++n)
	{
		//
		fib = a+b;
		cout << "F(" << n << ") = " << fib << endl;
		a = b;
		b = fib;
	}

}