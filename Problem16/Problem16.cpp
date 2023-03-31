#include <iostream>

using namespace std;

int main()
{
	//Write a C++ program to accept 10 numbers from the user and calculate the sum of the 
	//factorials of these numbers. (Your program should check for the negative numbers and zeros.)

	int n, factorial = 1, sum = 0;

	cout << "Enter 10 nmbers: " << endl;

	for (int i = 1; i <= 10; i++)
	{
		cin >> n;
		factorial = 1;
		for (int j = n; j >= 1; j--)
		{
			factorial *= j;
		}
		sum += factorial;
	}
	cout << "The sum of all factorials is: " << sum;


	return 0;
}