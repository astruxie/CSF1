/*
Sam Noggle 10/24/2017
This is my own work SJN
This is a program used to test the users knowledge on "astronomy" and print to the screen their results.
*/


#include <iostream>
using namespace std;

int main()
{

	//declare variables
	int res1, res2, res3;
	int correct = 0;

	//ask questions
	//QUESTION 1
	cout << "\n\tSUPER SWAGGIN SPACE QUIZ!!! *dab* \n\n";
	cout << "\tWhen day and night are of equal length it is called:\n";
	cout << "\t1.) The summer solstice\n";
	cout << "\t2.) The winter solstice\n";
	cout << "\t3.) Equinox\n";
	cout << "\t4.) An eclipse\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
		case 1:
			cout << "\nIncorrect.\n\n";
			break;
		case 2:
			cout << "\nIncorrect.\n\n";
			break;
		case 3:
			cout << "\nCorrect!\n\n";
			correct++;
			break;
		case 4:
			cout << "\nIncorrect.\n\n";
			break;
	}
	//QUESTION 2
	cout << "\tWhat is a celestial object consisting of a nucleus of ice and dust called?\n";
	cout << "\t1.) A star\n";
	cout << "\t2.) Pluto\n";
	cout << "\t3.) A meteorite\n";
	cout << "\t4.) A comet\n\n";
	cout << "\tPlease select a number 1-4: ";
	cin >> res2;

	switch (res2)
	{
		case 1:
			cout << "\nIncorrect.\n\n";
			break;
		case 2:
			cout << "Incorrect.\n\n";
			break;
		case 3:
			cout << "Incorrect.\n";
			break;
		case 4:
			cout << "\nCorrect!\n";
			correct++;
			break;
	}
	//QUESTION 3
	cout << "\n\tHow flat is the Earth?\n";
	cout << "\t1.) Exactly 33 degrees\n";
	cout << "\t2.) Square??????\n";
	cout << "\t3.) Very flat\n";
	cout << "\t4.) The sun is flat\n";
	cout << "\tPlease select a number 1-4: ";
	cin >> res3;

	switch (res3)
	{
		case 1:
			cout << "\nI dunno... I guess so...\n\n";
			correct++;
				break;
		case 2:
			cout << "\nIncorrect.\n\n";
			break;
		case 3:
			cout << "\n#WOKE FLAT EARTHERS FOREVER \nTHE GOVERNMENT IS HIDING IT ALL!!!!\n\n";
			break;
		case 4:
			cout << "\nIncorrect. How can the sun be flat when the Earth is flat?\n\n";
			break;
	}
	//QUESTION 4
	cout << "\tWho was the 2nd human to stand on the Moon?\n";
	cout << "\t1.) Buzz Lightyear \n";
	cout << "\t2.) Buzz Aldrin\n";
	cout << "\t3.) Buzz buzz I'm a bee\n";
	cout << "\t4.) BuzzFeed\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
	case 1:
		cout << "\nIncorrect.\n\n";
		break;
	case 2:
		cout << "\nCorrect!\n\n";
		correct++;
		break;
	case 3:
		cout << "\nIncorrect.\n\n";
		break;
	case 4:
		cout << "\nIncorrect.\n\n";
		break;
	}
	//QUIESTION 5
	cout << "\tHow many earths could fit in the sun? Like, I'd really like to know thanks.\n";
	cout << "\t1.) I dunno, like 4 or 5\n";
	cout << "\t2.) The sun is flat, therefore, this question doesnt make sense to me\n";
	cout << "\t3.) 1.3 million Earths\n";
	cout << "\t4.) 50 million Earths\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
	case 1:
		cout << "\nIncorrect.\n\n";
		break;
	case 2:
		cout << "\nIncorrect. But I respect it. #FlatSunTheory\n\n";
		break;
	case 3:
		cout << "\nCorrect!\n\n";
		correct++;
		break;
	case 4:
		cout << "\nIncorrect.\n\n";
		break;
	}
	//QUESTION 6
	cout << "\tWhat is time?\n";
	cout << "\t1.) A component quantity of various measurements used to sequence events,\n\t    to compare the duration of events or the intervals between them, \n\t    and to quantify rates of change of quantities in material reality or in the conscious experience\n";
	cout << "\t2.) A construct\n";
	cout << "\t3.) How close we are to death\n";
	cout << "\t4.) None of the above\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
	case 1:
		cout << "\nCorrect!\n\n";
		correct++;
		break;
	case 2:
		cout << "\nIncorrect.\n\n";
		break;
	case 3:
		cout << "\nIncorrect.\n\n";
		correct++;
		break;
	case 4:
		cout << "\nIncorrect.\n\n";
		break;
	}
	//QUESTION 7
	cout << "\tWhat is the farthest human-made object from planet Earth?\n";
	cout << "\t1.) Hubble\n";
	cout << "\t2.) Voyager II\n";
	cout << "\t3.) Pioneer 10\n";
	cout << "\t4.) Voyager I\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
	case 1:
		cout << "\nIncorrect.\n\n";
		break;
	case 2:
		cout << "\nIcorrect.\n\n";
		break;
	case 3:
		cout << "\nIncorrect.\n\n";
		break;
	case 4:
		cout << "\nCorrect!\n\n";
		correct++;
		break;
	}
	//QUESTION 8
	cout << "\tWhat planet in our solar system has the most gravity?\n";
	cout << "\t1.) Venus\n";
	cout << "\t2.) Mars\n";
	cout << "\t3.) Jupiter\n";
	cout << "\t4.) Saturn\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
	case 1:
		cout << "\nIncorrect.\n\n";
		break;
	case 2:
		cout << "\nIcorrect.\n\n";
		break;
	case 3:
		cout << "\nCorrect!\n\n";
		correct++;
		break;
	case 4:
		cout << "\nIncorrect\n\n";
		break;
	}
	//QUESTION 9
	cout << "\tWhat is the smallest planet in our solar system?\n";
	cout << "\t1.) Pluto\n";
	cout << "\t2.) Mercury\n";
	cout << "\t3.) Earth\n";
	cout << "\t4.) Venus\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
	case 1:
		cout << "\nIncorrect. PLUTO IS NOT A PLANET\n\n";
		break;
	case 2:
		cout << "\nCorrect!\n\n";
		correct++;
		break;
	case 3:
		cout << "\nIncorrect.\n\n";
		break;
	case 4:
		cout << "\nIncorrect.\n\n";
		break;
	}
	//QUESTION 10
	cout << "\tHow many people have walked on the moon?\n";
	cout << "\t1.) 11\n";
	cout << "\t2.) 16\n";
	cout << "\t3.) 12\n";
	cout << "\t4.) 9\n\n";
	cout << "\tPlease select a number 1-4:";
	cin >> res1;

	switch (res1)
	{
	case 1:
		cout << "\nIncorrect.\n\n";
		break;
	case 2:
		cout << "\nIncorrect\n\n";
		break;
	case 3:
		cout << "\nCorrect!\n\n";
		correct++;
		break;
	case 4:
		cout << "\nIncorrect.\n\n";
		break;
	}

	//RESULTS

	if (correct >= 7)
	{
		cout << "\n\n\tNice! You got " << correct << " answers out of 10 correct! You passed!\n\n";
	}
	else
	{
		cout << "\n\n\tWoah, you got " << correct << " answers out of 10 correct. You failed, bro.\n\n";
	}
}

/*

SUPER SWAGGIN SPACE QUIZ!!! *dab*

When day and night are of equal length it is called:
1.) The summer solstice
2.) The winter solstice
3.) Equinox
4.) An eclipse

Please select a number 1-4:3

Correct!

What is a celestial object consisting of a nucleus of ice and dust called?
1.) A star
2.) Pluto
3.) A meteorite
4.) A comet

Please select a number 1-4: 4

Correct!

How flat is the Earth?
1.) Exactly 33 degrees
2.) Square??????
3.) Very flat
4.) The sun is flat
Please select a number 1-4: 3

#WOKE FLAT EARTHERS FOREVER
THE GOVERNMENT IS HIDING IT ALL!!!!

Who was the 2nd human to stand on the Moon?
1.) Buzz Lightyear
2.) Buzz Aldrin
3.) Buzz buzz I'm a bee
4.) BuzzFeed

Please select a number 1-4:3

Incorrect.

How many earths could fit in the sun? Like, I'd really like to know thanks.
1.) I dunno, like 4 or 5
2.) The sun is flat, therefore, this question doesnt make sense to me
3.) 1.3 million Earths
4.) 50 million Earths

Please select a number 1-4:2

Incorrect. But I respect it. #FlatSunTheory

What is time?
1.) A component quantity of various measurements used to sequence events,
to compare the duration of events or the intervals between them,
and to quantify rates of change of quantities in material reality or in the conscious experience
2.) A construct
3.) How close we are to death
4.) None of the above

Please select a number 1-4:1

Correct!

What is the farthest human-made object from planet Earth?
1.) Hubble
2.) Voyager II
3.) Pioneer 10
4.) Voyager I

Please select a number 1-4:4

Correct!

What planet in our solar system has the most gravity?
1.) Venus
2.) Mars
3.) Jupiter
4.) Saturn

Please select a number 1-4:3

Correct!

What is the smallest planet in our solar system?
1.) Pluto
2.) Mercury
3.) Earth
4.) Venus

Please select a number 1-4:1

Incorrect. PLUTO IS NOT A PLANET

How many people have walked on the moon?
1.) 11
2.) 16
3.) 12
4.) 9

Please select a number 1-4:3

Correct!



Woah, you got 6 answers out of 10 correct. You failed, bro.

Press any key to continue . . .
*/