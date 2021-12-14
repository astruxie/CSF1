#include <iostream>
using namespace std;

int main()

{
	//variables
	int number, height, age, heart;

	//ask user for info
	cout << "Are you taller than 48 inches? Please use 1 for YES and 0 for NO ";
	cin >> height;

	cout << "\n\nAre you older than six years? ";
	cin >> age;

	cout << "\n\nDo you have a heart conditoion? ";
	cin >> heart;

	//statements
	if (height == 1 && age == 1 && heart == 0)
	{
		cout << "\n\nYay! You can ride this ride!\n\n";
	}
	else
	{
		cout << "\n\nOh no, you are not able to ride.\n\n";
	}

}