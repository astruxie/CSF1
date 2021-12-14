/*
Samantha Noggle, 9/27/17, Period 4
This is my own work SJN
This is a program used to print my first name, middle initial, last name, GPA, and grade.
*/



#include <iostream>
using namespace std;

int main()
{

	//declare variables
	char FirstName[20];
	char MiddleInitial;
	char LastName[20];
	int age;
	float GPA;
	char fullName[50];

	//get info from user

	cout << "\nHello! What is your first name?   ";
	cin >> FirstName;

	cout << "\nWhat is your middle initial?   ";
	cin >> MiddleInitial;
	
	cout << "\nWhat is your last name?   ";
	cin >> LastName;

	cout << "\nHow old are you?   ";
	cin >> age;

	cout << "\nWhat is your GPA?   ";
	cin >> GPA;
	//flush input stream
	cin.ignore(80, '\n');

	cout << "\nEnter your full name : ";
	cin.get(fullName, 50);
	//flush input stream
	cin.ignore(80, '\n');


	//print info to user

	cout << "\n\n\t\tHello, " << FirstName << " " << MiddleInitial << " " << LastName << "!\n";
	cout << "\t\tYour age is " << age << " And your GPA is " << GPA << "!\n\n";
	cout << "\t\tYour full name is " << fullName << "\n";

}


/*

Hello! What is your first name?   Sam

What is your middle initial?   J

What is your last name?   Noggle

How old are you?   16

What is your GPA?   4.0


Hello, Sam J Noggle!
Your age is 16 And your GPA is 4!

Press any key to continue . . .




*/
