import java.util.Scanner;

public class compareIt
{
	public static void main (String[] args)
	{
		//declare variables
		String correct = "beautiful";
		String guess;
		Scanner reader = new Scanner (System.in);

		//get info
		System.out.println ("Type in the correct spelling of butiful:  ");
		guess = reader.nextLine();

		if (correct.equalscompareTo(guess) == 0)              //++++++++++++NEW THINGY HERE ++++++++++++++++++++++++++++++++
		{
			System.out.println ("You are a good speller!");
		}
		else
		{
			System.out.println ("Not so good...");
		}



	}
}