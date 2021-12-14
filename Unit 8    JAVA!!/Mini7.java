import java.util.Scanner;

public class Mini7
{
	public static void main (String[] args)
	{
		//declare variables
		int num1, num2, num3;
		double average;
		Scanner r = new Scanner (System.in);

		//assign values
		System.out.println ("Give me a number");
		num1 = r.nextInt();

		System.out.println ("Give me another number");
		num2 = r.nextInt();

		System.out.println ("Give me one more number");
		num3 = r.nextInt();

		average = (num1 + num2 + num3)/3.0;
		System.out.println ("The average is " + average);
