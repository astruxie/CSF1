/*
Write a program that calculates the cost of painting a room.
Ask the user for the number of square feet of surface to be painted.
Given that a one gallon can of paint covers 300 square feet and costs $35, calculate the number 
of gallons required and the total cost of the paint needed.
Print the results to the screen in a well-formated display. 
(Careful -- can only buy whole gallons of paint.)
*/

#include <iostream>
using namespace std;

int main()

{

	//declare variables
	int squarefeet;
	const int gallon = 300;
	const int galloncost = 35;
	int numofgal;

	//ask user for info

	cout << "\n\nHow many square feet need to be painted? ";
	cin >> squarefeet;

	//calculate

	numofgal = (squarefeet / gallon);

	//print to screen

	cout << "\n\nYou need to buy " << numofgal << " gallons of paint!\n\n";
}