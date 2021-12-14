/*
Sam Noggle, Dylan Stiver, Darius Le
10/31/2017
Period 4
This is our own work, SN, DS, DL
Spooky story by james william
*/

#include <iostream>
using namespace std;

//prototype
int mainEntrance();
int deadBody();

//variables
int choice; /*hi students*/
char name[20];
char name2 = 'J';
float thisisoutrequiredfloattttt = 3.1454212;

int main()

{
	//ravioli ravioli give me the spookioli

	//ask questions
	cout << "Welcome, what is your name? \n";
	cin >> name;
	cout << "Your name is now " << name << ".\n";
	
	
	//start story
	cout << "\n\n\tOne day " << name << " got a letter in the mail inviting them to a dinner party. \n\tIt was signed: " << name2 << ".\n";
	cout << "\tThe address was " << thisisoutrequiredfloattttt << " Spooky Street.\n";
	cout << "\tDo you decide go or not?\n";
	cout << "\t1.)Yes\n";
	cout << "\t2.)No\n\n";
	cin >> choice;
	switch (choice) /*nicely done*/
	{
	case 1:
		cout << "\tDespite how mysterious and abrupt the letter was...\n";
		cout << "\t" << name << " decided to go to the party!\n\n";
		break;
	case 2:
		cout << "\tOkay, bye.\n\n";
		return 0;
		break;
	}
	//at mansion... knock on door or got to window.
	if (choice == 1)
	{
		cout << "\tWhen " << name << " arrived at the address listed on the invintation they saw a gigantic mansion!\n";
		cout << "\t1.) Knock on the door\n";
		cout << "\t2.) Try to get in through window\n\n";
		cin >> choice;
	}
	switch (choice) //Sweet!
	{
	case 1:
		cout << "\t" << name << " hears a loud creeEEEAAAKKK as the door swings open\n";

		break;
	case 2:
		cout << "\tWHERE ARE YOUR MANNERS!?\n";
		cout << "\t" << name << " tried to break the window with their fist.\n";
		cout << "\tCutting their hand, they fell to the ground and bled out\n\n";
		cout << "\t\t----------END----------\n\n";
		return 0;
		break;
	}
	cout << "\t" << name << " steps inside the eeire doorway and the door slams shut behind them\n";
	cout << "\t1.)Go downstairs\n";
	cout << "\t2.)Go inside a room\n";
	cin >> choice;

	switch (choice)
	{

	case 1: 
		cout << "\tThe stairs seem to lure " << name << " as if they were calling their name...\n";
		cout << "\tAt the bottom of the stairs a lump covored in bloody cloth is visible. It seems to be a dead body.\n";
		cout << "\t1.)Scream\n";
		cout << "\t2.)Run away\n";
		cout << "\t3.)Touch the body\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\tYou screamed...\n";
			cout << "\tBut nothing happened. Man up, bro.\n";
			deadBody();
			break;
		case 2:
			cout << "\tWow. You're easily spooked\n";
			return 0;
			break;
		case 3:
			cout << "\t" << name << " walks over to the lump and pokes it gingerly with their foot\n";
			cout << "\tThe lump MOVES! It is an old, gaunt-looking man. It looks like he has been sleeping on the floor\n";
			cout << "\t\"Oh hello! Welcome to my humble abode! I seem to have dozed off, waiting for my guests to arrive... This comfy floor put me right to sleep!\"\n";
			cout << "\nHe chuckles to himself\n\n";
			cout << "\tWhat do you say to him?\n";
			cout << "\t1.)\"What is your problem!? Creepy old man! Get away from me!!!\"\n";
			cout << "\t2.)\"Oh, hello... You must be J? Nice to meet you... Uh, sir...\"\n";
			cin >> choice;
			break;
	
		switch (choice)
		{
		case 1:
			cout << "\tWRONG CHOICE!\n";
			cout << "\t" << name << " shrieks at the old man, calling him disgusting\n";
			cout << "\t The man's eyes roll back into his head... And he pretty much eats you. You deserved it. Learn some manners, " << name << "\n\n";
			cout << "\nThanks for playing, or whatever\n";
			return 0;
			break;
		case 2:
			cout << "\tThe man smiles and stands up.\n";
			cout << "\t\"I believe your name is " << name << ". Is that correct? Let us go upstairs and wait for the rest of my guests to arrive\"\n";
			cout << "\n\t" << name << " and J walk upstairs together and more guests soon begin to arrive\n";
			cout << "\tYou became good friends with J and enjoy a delicious meal. \n\tSadly one week later you suffer severe food poisoning and die within a few hours. Unlucky.\n";
			break;
		}
		}
		break;

	case 2:
		cout << "\t" << name << " curiously enters the first door they see.\n";
		cout << "\tA loud shattering sound can be heard from across the room...\n";
		cout << "\n1.) Investigate\n";
		cout << "\n2.) Get the heck out of there!!\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\t" << name << "slowly made their way to where the noise came from.\n";
			cout << "\tThey tripped on a stray rubber duck, cracked their skull on a table, and bled out.\n";
			cout << "\t\t----------END----------\n\n";
			return 0;
			break;

		case 2:
			mainEntrance();
			break;
		}
		break;

	}



	//to use it
	//mainEntrance();
}//end main

int mainEntrance()
{
	cout << "\tGood choice!\n ";
	cout << "\t" << name << " skedaddled out of the room and back into the main entrance.\n";
	cout << "\t1.)Go downstairs\n";
	cout << "\t2.)Wait I wanna go back!\n";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\tThe stairs seem to lure " << name << " as if they were calling their name...\n";
		cout << "\tAt the bottom of the stairs a lump covored in bloody cloth is visible. It seems to be a dead body.\n";
		cout << "\t1.)Scream\n";
		cout << "\t2.)Run away\n";
		cout << "\t3.)Touch the body\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\tYou screamed...\n";
			cout << "\tBut nothing happened. Man up, bro.\n";
			deadBody();
			break;
		case 2:
			cout << "\tWow. You're easily spooked\n";
			return 0;
			break;
		case 3: 
			cout << "\t" << name << " walks over to the lump and pokes it gingerly with their foot\n";
			cout << "\tThe lump MOVES! It is an old, gaunt-looking man. It looks like he has been sleeping on the floor\n";
			cout << "\t\"Oh hello! Welcome to my humble abode! I seem to have dozed off, waiting for my guests to arrive... This comfy floor put me right to sleep!\"\n";
			cout << "\nHe chuckles to himself\n\n";
			cout << "\tWhat do you say to him?\n";
			cout << "\t1.)\"What is your problem!? Creepy old man! Get away from me!!!\"\n";
			cout << "\t2.)\"Oh, hello... You must be J? Nice to meet you... Uh, sir...\"\n";
			cin >> choice;
			break;

			switch (choice)
			{
			case 1:
				cout << "\tWRONG CHOICE!\n";
				cout << "\t" << name << "shrieks at the old man, calling him disgusting\n";
				cout << "\t The man's eyes roll back into his head... And he pretty much eats you. You deserved it. Learn some manners, " << name << "\n\n";
				cout << "\nThanks for playing, or whatever\n";
				break;
			case 2:
				cout << "\tThe man smiles and stands up.\n";
				cout << "\t\"I believe your name is " << name << ". Is that correct? Let us go upstairs and wait for the rest of my guests to arrive\"\n";
				cout << "\n\t" << name << " and J walk upstairs together and more guests soon begin to arrive\n";
				cout << "\tYou became good friends with J and enjoy a delicious meal. \n\tSadly one week later you suffer severe food poisoning and die within a few hours. Unlucky.\n\n";
				break;
			}
	}
		break;
	case 2:
		cout << "\t" << name << " stupidly re-enters the first door they see.\n";
		cout << "\tA loud shattering sound can be heard from across the room...\n";
		cout << "\n1.) Investigate\n";
		cout << "\n2.) Get the heck out of there!!\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\t" << name << "slowly made their way to where the noise came from.\n";
			cout << "\tThey tripped on a stray rubber duck, cracked their skull on a table, and bled out.\n";
			cout << "\t\t----------END----------\n\n";
			break;

		case 2:
			mainEntrance();
			break;
		}
		break;

	}

}

int deadBody()
{
	cout << "\tThe stairs seem to lure " << name << " as if they were calling their name...\n";
	cout << "\tAt the bottom of the stairs a lump covored in bloody cloth is visible. It seems to be a dead body.\n";
	cout << "\t1.)Run away\n";
	cout << "\t2.)Touch the body\n";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\tWow. You're easily spooked\n";
		return 0;
		break;

	case 2:
		cout << "\t" << name << " walks over to the lump and pokes it gingerly with their foot\n";
		cout << "\tThe lump MOVES! It is an old, gaunt-looking man. It looks like he has been sleeping on the floor\n";
		cout << "\t\"Oh hello! Welcome to my humble abode! I seem to have dozed off, waiting for my guests to arrive... This comfy floor put me right to sleep!\"\n";
		cout << "\nHe chuckles to himself\n\n";
		cout << "\tWhat do you say to him?\n";
		cout << "\t1.)\"What is your problem!? Creepy old man! Get away from me!!!\"\n";
		cout << "\t1.)\"Oh, hello... You must be J? Nice to meet you... Uh, sir...\"\n";
		cin >> choice;
		break;
	} 

	switch (choice)
	{
	case 1:
		cout << "\tWRONG CHOICE!\n";
		cout << "\t" << name << "shrieks at the old man, calling him disgusting\n";
		cout << "\t The man's eyes roll back into his head... And he pretty much eats you. You deserved it. Learn some manners, " << name << "\n\n";
		cout << "\nThanks for playing, or whatever\n";
		return 0;
		break;
	case 2:
		cout << "\tThe man smiles and stands up.\n";
		cout << "\t\"I believe your name is " << name << ". Is that correct? Let us go upstairs and wait for the rest of my guests to arrive\"\n";
		cout << "\n\t" << name << " and J walk upstairs together and more guests soon begin to arrive\n";
		cout << "\tYou became good friends with J and enjoy a delicious meal. \n\tSadly one week later you suffer severe food poisoning and die within a few hours. Unlucky.\n\n";
		break;
	}
	return 1;
}//end of void

/*
Welcome, what is your name?
Sam
Your name is now Sam.


One day Sam got a letter in the mail inviting them to a dinner party.
It was signed: J.
The address was 3.14542 Spooky Street.
Do you decide go or not?
1.)Yes
2.)No

1
Despite how mysterious and abrupt the letter was...
Sam decided to go to the party!

When Sam arrived at the address listed on the invintation they saw a gigantic mansion!
1.) Knock on the door
2.) Try to get in through window

1
Sam hears a loud creeEEEAAAKKK as the door swings open
Sam steps inside the eeire doorway and the door slams shut behind them
1.)Go downstairs
2.)Go inside a room
1
The stairs seem to lure Sam as if they were calling their name...
At the bottom of the stairs a lump covored in bloody cloth is visible. It seems to be a dead body.
1.)Scream
2.)Run away
3.)Touch the body
1
You screamed...
But nothing happened. Man up, bro.
The stairs seem to lure Sam as if they were calling their name...
At the bottom of the stairs a lump covored in bloody cloth is visible. It seems to be a dead body.
1.)Run away
2.)Touch the body
1
Wow. You're easily spooked
Press any key to continue . . .
*/
