import java.util.Scanner;
public class MansNotHot
{
	public static void main (String[] args)
	{

		//declare variables
		int roomtemp;
		final int maxtemp = 100;
		Scanner myReader = new Scanner (System.in);

		//get info
		System.out.println ("What is the temperature of the room?");
		roomtemp = myReader.nextInt();

		do
		{
			System.out.println ("Thats too hot!! Take off your jacket and lower the temperature");
			roomtemp = myReader.nextInt();
		}
		while ( maxtemp < roomtemp);


		System.out.println ("Man's not hot");
	}
}