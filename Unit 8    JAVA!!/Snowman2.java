//********************************************************************
//  Snowman.java       Author: Lewis/Loftus
//
//  Demonstrates basic drawing methods and the use of color.
//********************************************************************

import java.applet.Applet;
import java.awt.*;

public class Snowman2 extends Applet
{
   //-----------------------------------------------------------------
   //  Draws a snowman.
   //-----------------------------------------------------------------
   public void paint (Graphics page)
   {
      setBackground (Color.cyan);

      page.setColor (Color.blue);
      page.fillRect (0, 175, 300, 50);  // ground

      page.setColor (Color.yellow);
      page.fillOval (345, -40, 80, 80);  // sun

      page.setColor (Color.white);
      page.fillOval (130, 50, 40, 40);      // head
      page.fillOval (115, 85, 70, 50);   // upper torso
      page.fillOval (100, 130, 100, 60);  // lower torso

	  page.setColor (Color.red);
      page.fillOval (145, 95, 10, 10); //button 1
      page.fillOval (145, 150, 10, 10); //button 2

      page.setColor (Color.black);
      page.fillOval (140, 60, 5, 5);   // left eye
      page.fillOval (155, 60, 5, 5);    // right eye

      page.drawArc (140, 70, 20, 10, 190, -160);   // smile

      page.drawLine (125, 110, 100, 90);  // left arm
      page.drawLine (175, 110, 205, 110);  // right arm

      page.drawLine (130, 55, 170, 55);  // brim of hat
      page.fillRect (135, 30, 30, 25);        // top of hat

      page.drawString ("Sam Noggle" 0,10); //name
   }
}