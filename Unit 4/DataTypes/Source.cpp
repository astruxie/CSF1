/*
Samantha Noggle, 10/4/17, Period 4
This is my own work SJN
This is a program used to find and print the user's favorite band, amount of pets, grade expected, and how much of a pizza they can eat.
*/





#include <iostream>
using namespace std;

int main()

{

	//decare variables
	char band [50];
	char grade;
	int pets;
	float pizza;

	//get info from user

	cout << "\n\nHello! What is your favourite band? ";
	cin >> band;

	//flush input stream
	cin.ignore(80, '\n');

	cout << "\n\nWhat letter grade do you expect to have in CSF1? ";
	cin >> grade;

	//flush input stream
	cin.ignore(80, '\n');

	cout << "\n\nHow many pets do you have? ";
	cin >> pets;

	//flush input stream
	cin.ignore(80, '\n');

	cout << "\n\nHow much of a pizza can you eat? ";
	cin >> pizza;

	//print info to screen

	cout << "\n\nThank you! Your favourite band is " << band << ". The grade you expect in this class is " << grade << ". You have " << pets << " pets!";
	cout << "\nYou can eat " << pizza << " of a pizza.\n\n";

	/*
	

Hello! What is your favourite band? Starset


What letter grade do you expect to have in CSF1? A


How many pets do you have? 2


How much of a pizza can you eat? .50


Thank you! Your favourite band is Starset. The grade you expect in this class is A. You have 2 pets!
You can eat 0.5 of a pizza.

Press any key to continue . . .

	*/


}