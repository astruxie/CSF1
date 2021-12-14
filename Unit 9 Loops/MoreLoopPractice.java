import java.util.Scanner;
public class MoreLoopPractice
{
	public static void main (String[] args)
	{
		//declare variables
		int request, x;
		int num = 0;
		Scanner myReader = new Scanner (System.in);

		//ask user for info
		System.out.println ("How many times would you like HI to be printed?  ");
		request = myReader.nextInt();

		//print how many they want
		while (num != request)
		{
			System.out.println ("Hi again!!");
			num++;
		}

		//print the numbers
		for (x = 3; x >= 15; x += 3)
		{
		System.out.println (x);
		}

	}
}