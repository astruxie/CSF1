
import java.applet.Applet;
import java.awt.*;

public class PieChart extends Applet
	{
		public void paint (Graphics page)
		{

			setBackground (Color.pink);

			page.setColor (Color.magenta);
			page.fillOval (120, 50, 200, 200);

			page.setColor (Color.blue);
			page.fillArc (120, 50, 200, 200, 0, (int)115.2);

			page.setColor (Color.yellow);
			page.fillArc (120, 50, 200, 200, (int)115.2, (int)100.8);


			page.setColor (Color.black);
			page.drawString ("Housing & Utilities", 230, 90);
			page.drawString ("Food & Transportation", 70, 120);
			page.drawString ("Other", 220, 200);
		}
	}