import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class helloSwing{
	JFrame f;
	public static void main(String argv[]){
		new helloSwing("helloSwing");
	}
	
	public helloSwing(String title){
		JFrame.setDefaultLookAndFeelDecorated(true);
		f =new JFrame(title);
		//f.setUndecorated(true);
		//f.setExtendedState(Frame.MAXIMIZED_BOTH);
		//f.getRootPane().setWindowDecorationStyle(JRootPane.FRAME);
		//f.setSize(400, 300);
		f.setBounds(0,0,400,300);
		//f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		//f.setBounds(0,0,400,300);
		//f.setLocation((d.width-s.width)/2,(d.height-s.height)/2);
		//f.setLocationRelativeTo(null);
		f.setVisible(true);
		f.addWindowListener( new WindowHandler());
	}
}

class WindowHandler extends WindowAdapter{
	public void windowClosing(WindowEvent e) {System.exit(0);}
}
