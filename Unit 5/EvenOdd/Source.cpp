#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int number, remainder;

	//ask user for info
	cout << "Please enter your number here! ";
	cin >> number;

	//calculate
	remainder = (number % 2);

	//statements
	if (remainder == 0)
	{
		cout << "\n\nYour number is even! ";
	}
	else
	{
		cout << "Your number is odd! \n\n";
	}




}