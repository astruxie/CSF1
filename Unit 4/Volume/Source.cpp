/*
Ask the user for the length, width and height (in inches) of an object.
Calculate the volume and print the volume to the screen and include a string literal that tells what the units are.
*/

#include <iostream>
using namespace std;

int main()

{

	//declare variables
	float length;
	float width;
	float height;
	float volume;

	//get info from user
	cout << "In inches, whnat is the length of your object? ";
	cin >> length;

	cout << "\n\nWhat is the width \n\n";
	cin >> width;

	cout << "What is the height? \n\n";
	cin >> height;

	//maffs
	volume = length * width * height;

	//print to screen
	cout << "The volume of your object is " << volume << ". \n\n";
}