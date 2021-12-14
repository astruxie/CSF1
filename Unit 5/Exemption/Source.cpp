#include <iostream>
using namespace std;

int main()

{
	//declare variables
	float grade;

	//ask user for info
	cout << "What is your current grade? ";
	cin >> grade;

	//statements

	if (grade >= 90)
	{
		cout << "\nYou are exempt from the final exam! Congrats!\n";
	}
	else
	{
		cout << "Oh no! You have to take the final exam!\n\n";
	}
}