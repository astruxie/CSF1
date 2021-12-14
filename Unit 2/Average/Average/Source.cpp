#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int num1, num2, num3, num4;
	float average;

	//get information from user
	cout << "\nEnter number 1:";
	cin >> num1;

	cout << "\n\nEnter number 2:";
	cin >> num2;

	cout << "\n\nEnter number 3:";
	cin >> num3;

	cout << "\n\nEnter number 4:";
	cin >> num4;

	//do calculation
	average = (num1 + num2 + num3 + num4) / 4.0;

	//print info to user
	cout <<  "\n\nThe average is... " << average << "\n\n";
}