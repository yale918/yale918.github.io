import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
/*
class javaSimpleFrame{
    public static void main( String args[]){
        JFrame frame = new JFrame();
        frame.setSize( 100, 300);
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        frame.setVisible( true ); 
    }

}
*/


class javaSimpleFrame extends JFrame{
    public static void main( String args[]){
        new javaSimpleFrame("hello swing");
    }

    javaSimpleFrame(String title){
        javaSimpleFrame myJF = new javaSimpleFrame();
        this.setSize(900, 1000);
        //this.setDefaultLookAndFeelDecorated(true);
        //setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        //myJF.setVisible(true);
        
    
    }


}

