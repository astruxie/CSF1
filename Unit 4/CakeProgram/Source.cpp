/*
Sam Noggle 10/13/2017 Period 4
This is my own work SJN
A program used to ask the user in grams the ammount of eggs and milk they have. 
Then it calculates how much flour, sugar, and butter they will need to make a cake.
*/

#include <iostream>
using namespace std;

int main()

{
	//declare variables
	int eggs, milk, flour, sugar, butter;

	//ask user for info
	cout << "\nHow many eggs do you have? ";
	cin >> eggs;

	cout << "\n\nHow much milk do you have? ";
	cin >> milk;

	//calculate
	sugar = (eggs + milk);
	flour = sugar;
	butter = eggs;

	//print info
	cout << "\n\nThanks! You will need " << flour << " grams of flour, " << sugar << " grams of sugar, and " << butter << " grams of butter!\n\n";


	/*
	
How many eggs do you have? 130


How much milk do you have? 170


Thanks! You will need 300 grams of flour, 300 grams of sugar, and 130 grams of butter!

Press any key to continue . . .

	*/
}