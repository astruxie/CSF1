/*
Write a program that calculates the fine for a speeding ticket.
Use a base fine of $80 for violating the speed limit and an additional $5 for each mile per hour over the speed limit.
Your program should ask the user how fast the speeder was going and what the speed limit is.
Use these values to calculate the fine.
*/

#include <iostream>
using namespace std;

int main()

{
	//declare variables
	int fine = 80;
	int mph;
	int endfine;
	int speedlimit;
	int milesabove;

	//ask user for info

	cout << "\t\tEnter the speed limit here ";
	cin >> speedlimit;

	cout << "\t\t\n\nHow fast were they going? ";
	cin >> mph;

	//calculate!

	milesabove = (mph - speedlimit);
	endfine = (milesabove * 5) + fine;

	//print to screen

	cout << "\t\t\n\nYour fine is " << endfine << "! \n\n";


		

}