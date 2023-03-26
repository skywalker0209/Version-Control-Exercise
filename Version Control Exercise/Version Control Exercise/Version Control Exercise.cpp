#include <iostream>
using namespace std;

int main()
{
	const int array_numbers = 10;
	int numbers[array_numbers] = { 1,2,3,4,5,6,7,8,9,10 };

	/*
	TODO: This should be in descending order
		10,9,8,7,6,5,4,3,2,1
	*/
	
	for (int i = array_numbers-1; i >= 0; i--)
	{
		cout << numbers[i] << ", ";
	}
}


