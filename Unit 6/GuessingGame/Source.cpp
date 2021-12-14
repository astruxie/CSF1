#include <iostream>
using namespace std;
#include <time.h>

int main()
{

	//declare variables
	int randomNum, guess;
	srand(time(0));

	//generateb random num
	randomNum = (rand() % 10) + 1;

	//get info
	system("Color 1A");
	cout << "\tGuess what the number is.\n\n\t\t";
	cin >> guess;

	//calculate
	if (randomNum == guess)
		cout << "\t\tYou guessed correctly!! Good job!!\n";
	while (randomNum != guess)
	{
		cout << "\tTry again!!\n\n\n\n";
		cin >> guess;
	}
}