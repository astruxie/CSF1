#include <iostream>
using namespace std;
#include <time.h>

int main()
{
	//declare variables
	int dice1, dice2;
	srand(time(0));

	//generate random numbers
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	//check for boxcars
	if (dice1 == 6 && dice2 == 6)
	{
		cout << "\tBox cars!\n";
	}
	else
		cout << "\tYou rolled: " << dice1 << " and " << dice2 << "\n";
	cout << "\tBetter luck next time!\n";
}