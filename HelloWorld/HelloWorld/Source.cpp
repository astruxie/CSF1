#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int age;
	float temp;

	//get info from user
	cout << "What is the student's temperature?     ";
	cin >> temp;

	if (temp > 100.5)
		cout << "\n\nAwhh, I'll call your mother :) \n\n";

	cout << "Anyway, what is your age?      ";
	cin >> age;

	if (age >= 16)
	{

		cout << "\n\nGo get your license!! WYD??? \n";
		cout << "Go buy a car!";
	}
	else
	{
		cout << "\n\n\t\tYou'll be 16 soon! :D\n";
	}
	cout << "\n\n\t\tHello\t World!\n\n";
	cout << "My school year has been going very well so far!\nThese are my first lines of code!\n";
}