#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int length, width;
	float squarefeet;

	//get info from user 
	cout << "Hey, I heard you're painting a wall. \nI can help you with those pesky calculations if you'd like. \nJust drop the length here.";
	cin >> length;

	cout << "Yeah now the width please ";
	cin >> width;

	//do calculation
	squarefeet = (length * width);

	//tell user
	cout << "Aight so it looks like you're gonna be painting a lotttttt!!!\n\n" << squarefeet << " square feet of wall.\n\n";
}