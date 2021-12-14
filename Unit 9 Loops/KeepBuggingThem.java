import java.util.Scanner;
public class KeepBuggingThem
{
	public static void main (String[] args)
	{

		//declare variables
		final int age = 16;
		int guess;
		Scanner myReader = new Scanner (System.in);

		//ask user for info
		System.out.println ("Guess my age!!  ");
		guess = myReader.nextInt();

		do
		{
			System.out.println ("You are wrong, keep guessing...  ");
			guess = myReader.nextInt();
		}

		while (guess != age);

		System.out.println ("Congrats!! You got it!!");
	}
}