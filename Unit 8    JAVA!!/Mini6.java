import java.util.Random;

public class Mini6
{
	public static void main (String[] args)
	{
		int die1, die2;
		Random gen = new Random();
		double probability;

		die1 = gen.nextInt(6)+ 1;
		die2 = gen.nextInt(6)+ 1;
		probability = gen.nextFloat();

		System.out.println ("Die1: " + die1 + " Die2: " + die2);

		if (die1 == die2)
		{
			System.out.println ("It's a pair!!");
		}
	System.out.println ("Chance of snow for holidays: " + probability);
	}
}