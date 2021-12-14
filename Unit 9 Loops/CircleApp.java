//Sam Noggle 1/4/18
//Period 4
//A program that generates 100 different circles with random colors
//This is my own work - SJN


import java.applet.Applet;
import java.awt.*;
import java.util.Random;


public class CircleApp extends Applet
{
	public void paint (Graphics page)
	{
		//declare variables
		final int NUM_CIRCLE = 100, MAX_Y = 250, MAX_X = 350, MAX_SIDE = 250, MAX_RGB = 256;
		int x, y, width, red, green, blue;

		 setBackground (Color.black);
		 Random generator = new Random();

		 for (int count = 0; count < NUM_CIRCLE; count++)
		   {
		        x = generator.nextInt (MAX_X) + 1;
		        y = generator.nextInt (MAX_Y) + 1;

		        width = generator.nextInt (MAX_SIDE) + 1;

				red = generator.nextInt (MAX_RGB) + 1;
				green = generator.nextInt (MAX_RGB) + 1;
				blue = generator.nextInt (MAX_RGB) + 1;

		          //* GENERATE RANDOM RGB COLOR *\\
		          Color Rand = new Color (red, green, blue);

		         page.setColor (Rand); // draw the stuffs
           		 page.fillOval (x, y, width, width);

			}   //end for




	}   //end graphics page

} //end main

