import.java.util.Scanner;

public class Ages
{
	public static void main (String[] args)
	{
		//declare variables
		int age;
		int dogyears;
		Scanner myReader = new Scanner (System.in);

		//Ask user
		System.out.println ("What is your age?");
		age = myReader.nextInt();

		(dogyears = age / 7);

		System.out.println ("Your age in dog years is " + dogyears);

	}
}