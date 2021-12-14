/*
Write a  small yet entertaining program that simulates an actual fortune found inside a fortune cookie.
Use a switch structure and a random number generator.
Include 5 different fortunes, generate a random number in the range 1 to 5 which then gets evaluated 
in a switch statement that prints one of the fortunes for the user.
*/



#include <iostream>
using namespace std;
#include <time.h>                //REMEMBER THIS

int main()

{
	//declare variables
	int randomNum;
	srand(time(0));                //REMEMBER THIS =

	//generateb random num
	randomNum = (rand() % 5) + 1;

	//switch
	switch (randomNum)
	{
		case 1: 
			system("Color E4");
			cout << "\n\t\tYou will die soon!!\n\n";
			break;
		case 2:
			system("Color 1A");
			cout << "\n\t\tSomething big is coming\n\n";
			break;
		case 3:
			system("Color 1A");
			cout << "\n\t\tYou will find $100 today!\n\n";
			break;
		case 4:
			system("Color 1A");
			cout << "\n\t\tA great loss is in your future...\n\n";
			break;
		case 5:
			system("Color 85");
			cout << "\t\n\nBe weary of new people today\n\n";
			break;
	}


}
