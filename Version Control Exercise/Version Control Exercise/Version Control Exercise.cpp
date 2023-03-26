#include <iostream>
using namespace std;

int main()
{
	const int array_numbers = 10;
	int numbers[array_numbers] = { 1,2,3,4,5,6,7,8,9,10 };

	/*
	TODO: Print each value of the array in order
	Expected:
		1,2,3,4,5,6,7,8,9,10
	*/
	for (int i = 0; i < array_numbers; i++)
	{
		cout << numbers[i] << ", ";
	}
}

