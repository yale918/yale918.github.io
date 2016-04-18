import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class helloDialog{
	JFrame f;
	public static void main(String argv[]){
		new helloDialog("helloDialog");
	}
	
	public helloDialog(String title){
		JFrame.setDefaultLookAndFeelDecorated(true);
		JDialog.setDefaultLookAndFeelDecorated(true);
		f =new JFrame(title);
		f.setBounds(0,0,400,300);
		f.setVisible(true);
		f.setDefaultCloseOperation(WindowConstants.DO_NOTHING_ON_CLOSE);
	
		f.addWindowListener( new WindowAdapter(){
			public void windowClosing(WindowEvent e){
				int resuilt = JOptionPane.showConfirmDialog(f,
				"確定要結束程式嗎?",
				"確認訊息",
				JOptionPane.YES_NO_OPTION,
				JOptionPane.WARNING_MESSAGE);
				
				if(resuilt == JOptionPane.YES_OPTION){System.exit(0);}
			}
		});
	}
}

class WindowHandler extends WindowAdapter{
	public void windowClosing(WindowEvent e) {System.exit(0);}
}
