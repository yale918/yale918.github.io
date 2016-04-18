import javax.swing.*;
import java.awt.*;


public class helloSwing{
    public static void main(String[] args){
        JFrame frame = new JFrame("Hello frame!");
        Container cp = frame.getContentPane();
        JButton button = new JButton("first JButton");

        cp.add(button);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.pack();
        frame.setVisible(true);
        
        JDialog dialog = new JDialog(); 
        dialog.setVisible(true);
        dialog.setSize(100,100);
    
    

    }


}
