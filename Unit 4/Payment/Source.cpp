/*
Ask the user to enter the prices of 3 objects they intend to purchase.
Have the program calculate the sales tax of the total purchases and then print out the sales tax 
and the total cost to the screen.  Be sure to use a constant variable that represents our PA sales tax of 6%.
Be sure to include string literals that tell the user what your output represents.
*/

#include <iostream>
using namespace std;

int main()

{

	//declare variables
	float obj1, obj2, obj3;
	const float tax = .06;
	float total;

	//get info

	cout << "Hello! Please enter the price of your fisrt item! ";
	cin >> obj1;

	cout << "\nWhat is the price of your second item? ";
	cin >> obj2;

	cout << "What is the price of your third and final item? ";
	cin >> obj3;

	//maffs
	total = (obj1 + obj2 + obj3) * tax;

	//print to screen

	cout << "Your total is " << total << ". \n\n";

}