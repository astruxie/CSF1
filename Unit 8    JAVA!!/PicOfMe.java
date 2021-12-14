/*
Sam Noggle
Period 4
12/11/17
This is my own work SJN
*/


import java.applet.Applet;
import java.awt.*;

public class PicOfMe extends Applet
	{
		public void paint (Graphics page)
		{
			Color Skin = new Color (252, 205, 169);
			Color Eye = new Color (45, 125, 150);
     		Color DarkSkin = new Color (249, 190, 144);
     		Color Hair = new Color (91, 55, 27);

			 setBackground (Color.red);

			 page.setColor (Skin);
			 page.fillOval (120, 50, 200, 220); //head

			 page.setColor (Color.white);
			 page.fillOval (150, 130, 45, 35);  //left eye
			 page.fillOval (235, 130, 45, 35);  //right eye

			 page.setColor (Eye);
			 page.fillOval (155, 135, 25, 25); //left color eye
			 page.fillOval (240, 135, 25, 25); //right color eye

			 page.setColor (DarkSkin);
			 page.fillArc (150, 125, 45, 35, 0, 180); //Eyelid
			 page.fillArc (235, 125, 45, 35, 0, 180); //Eyelid
			 page.fillOval (210, 182, 12, 8); //NOSTRILZZZZ SNIFF SNIFF

			 page.setColor (Color.black);
			 page.drawLine (150, 142, 195, 142); //eye liner
			 page.drawLine (235, 142, 280, 142); //eye liner

			 page.setColor (Color.black);
			 page.drawLine (213, 160, 200, 185); //nose shad
			 page.drawArc (185, 200, 55, 25, 0, -180); //mouf

			 page.setColor (Hair);                 //HAIR
			 page.fillRect (120, 90, 20, 200); // left strand
			 page.fillArc (120, 56, 70, 80, 90, 90); //left corner
			 page.fillRect (300, 90, 20, 200); // right strand
			 page.fillArc (249, 56, 70, 80, 90, -90); //right corner
			 page.fillArc (127, 38, 185, 100, 0, 180); //top
			 page.fillArc (262, 52, 100, 65, 185, 90); // right bangs
			 page.fillArc (40, 60, 200, 60, 30, -130); // left bangs
			 page.fillArc (212, 62, 80, 50, 230, -280); //part

		}
	}