#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	int expenses = 30;
	int players, profit;

	//get info from user
	cout << "How many people played games at the Falcon Fair?";
	cin >> players;

	profit = (players * 5) - 30;

	cout << "Your profit is " << profit << "\n";


}