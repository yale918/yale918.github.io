import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
 
class Swing1 extends JFrame
{
    // Main entry point for this example
    public static void main( String args[] )
    {
        // Create an instance of the test application
        Swing1 frame = new Swing1();
        frame.setVisible( true );
    }
 
    Swing1() {
        setSize(600, 480);
        setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
    }
 
}