/*
Write a program that asks the user for the number of cents in his/her pocket.
Calculate how many quarters, at most, could be in the change.  Print your results to the screen.
*/

#include <iostream>
using namespace std;

int main()

{

	//declare variables
	const int quarters = 25;
	const int dimes = 10;
	const int pennies = 1;
	const int nickels = 5;
	int centstotal;
	int numofQ, numofD, numofP, numofN;

	//ask user for info
	cout << "\tHow many cents do you have in your pocket? ";
	cin >> centstotal;

	//calculate
	numofQ = (centstotal / 25);

	//tell user
	cout << "\n\n\tYou have " << numofQ << " quarters!!!\n\n";
}