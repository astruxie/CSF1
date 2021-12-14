import java.util.Scanner;
public class Review
{
	public static void main (String[] args)
	{

		//declare variables
		int age, sib, gender, youngest;

		Scanner myReader = new Scanner (System.in);

		//ask user for info
		System.out.println ("What is your age?");
		age = myReader.nextInt();

		//if statement
		if (age < 10)
		{
			System.out.println ("Sorry, You cannot ride the roller coaster.");
		}
		else
		{
			System.out.println ("You may ride the roller coaster!");
		}

		//ask user for info
		System.out.println ("How many siblings do you have?");
		sib = myReader.nextInt();

		if (sib == 0)
		{
			System.out.println ("You are an only child!");
		}
		if (sib == 1)
		{
			System.out.println ("Do you have a brother or a sister? Press 1 for brother and 2 for sister");
			gender = myReader.nextInt();

			if (gender == 1)
			{
				System.out.println ("You are lucky!");
			}
		if (sib == 2)
		{
			System.out.println ("Are you the youngest? 1 for yes, 2 for no");
			youngest = myReader.nextInt();

			if (youngest == 1)
			{
				System.out.println ("You are very lucky!");
			}
		if (sib > 2)
		{
			System.out.println ("It's great to be part of a big family!");
		}
		}
		}

	}
}