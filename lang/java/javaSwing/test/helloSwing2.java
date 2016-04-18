import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;

public class helloSwing2 extends JFrame{
    int clickCount = 0;
    
    
    //JLabel create: ( L_ID, L_ID_text ), (L_PD, L_PD_text )
    JLabel L_ID = new JLabel("UserID: ", JLabel.RIGHT);
    JTextField L_ID_textField = new JTextField(20);
    JLabel L_PD = new JLabel("password: ", JLabel.RIGHT);
    JPasswordField L_PD_textField = new JPasswordField(20);

    JLabel L_ID_message = new JLabel("[*] Get Curser Position : ");
    JLabel L_PD_message = new JLabel("[*] Enter to get Password : ");

    


    public static void main(String[] args){
        new helloSwing2(); //shopping list
        new helloSwing2(1,1); //sing in filed       
        new helloSwing2(1); // click count
    }

    helloSwing2(int i){
        JLabel label = new JLabel("not click yet"); 
        JButton clickME = new JButton("Click ME");
        

        class alClickME implements ActionListener{
            public void actionPerformed(ActionEvent e){
                clickCount++;
                label.setText("["+e.getActionCommand()+"]"+ "was clicked " + clickCount + " times");
            }
        }

        Container cp = getContentPane(); 
        cp.add(clickME, BorderLayout.CENTER);
        cp.add(label, BorderLayout.SOUTH);
        alClickME al = new alClickME();
        clickME.addActionListener(al);
         
        pack();
        setLocation(310,50);
        setSize(200,150);
        setVisible(true);
    
    }   
    helloSwing2(){
        super("helloSwing2");
        // deal container and panel
        Container cp = getContentPane();
        JPanel jp = new JPanel();
        jp.setLayout(null);
        
        // create button and set position
        JButton buttonA = new JButton("Login");
        JButton buttonB = new JButton("List");          
        buttonA.setSize(new Dimension(70,30));  buttonA.setLocation(0,0);           
        buttonB.setSize(new Dimension(70,30));  buttonB.setLocation(70,0);          
        
        // add pane and container
        jp.add(buttonA);
        jp.add(buttonB);
        cp.add(jp);
       
        // frame attribute  
        Dimension dim = getToolkit().getScreenSize();
       // setSize(400,750);  
        setLocation(10,200); //setLocation(dim.width/2-getWidth()/2,dim.height/2-getHeight()/2);                
        
       
        pack();
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
        setSize(500,700);//setSize((int)dim.getWidth()/5, (int)dim.getHeight()/5); 

    
    
    }
    
    helloSwing2(int i, int j){
        //caret listener
        class filedCaretListener implements CaretListener{
            public void caretUpdate(CaretEvent e){
                if(e.getDot() == e.getMark()){
                    L_ID_message.setText("curser pos : "+e.getDot()); // get curser position
                }else{
                    L_ID_message.setText("curser range : "+e.getDot()+"to"+e.getMark());
                }
            }
        } 

        
        filedCaretListener fcl = new filedCaretListener(); // declaration listener

        ActionListener al = new ActionListener(){
            public void actionPerformed(ActionEvent e){
                JPasswordField source = (JPasswordField)e.getSource();

                L_PD_message.setText("password is : " + new String(L_PD_textField.getPassword()));
            }
        };
        
        L_ID_textField.addCaretListener(fcl); // regist listener
        L_PD_textField.addActionListener(al); // regist listener
        
        //Dialog created and set size
        JDialog dialog = new JDialog();
        dialog.setVisible(true);
        dialog.setLocation(10,50);
        dialog.setSize(300,150);

        //JPanel created
        Container cp = dialog.getContentPane();
        JPanel JP1 = new JPanel( new GridLayout(2,2,5,5)); // 2row,2column,5distance
        JPanel JP2 = new JPanel( new GridLayout(2,1,5,5)); // 2row,2column,5distance
        
        // password hide
        L_PD_textField.setEchoChar('*');
        
        //add component to pane
        JP1.add(L_ID);  JP1.add(L_ID_textField);
        JP1.add(L_PD);  JP1.add(L_PD_textField);
        JP2.add(L_ID_message);
        JP2.add(L_PD_message);

        //set distance
        BorderLayout bl = (BorderLayout)cp.getLayout(); // get layout manager
        bl.setVgap(10);
        
        //add pane to container
        cp.add(JP1);
        cp.add(JP2,BorderLayout.SOUTH);
    }


}  
