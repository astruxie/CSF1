public class Midi4
{
	public static void main (String[] args)
	{
		String myFav = "Top Secret";

		System.out.println ("Fourth letter is " + myFav.charAt(3));
		System.out.println ("Length is " + myFav.length());
		System.out.println ("Movie is Top Secret " + myFav.equals("Top Secret"));
		System.out.println ("Substring from 2 to 5 " + myFav.substring (2,5));
		System.out.println ("Lower case version " + myFav.toLowerCase());
		System.out.println ("Replace s with z " + myFav.replace ('s', 'z'));
	}
}