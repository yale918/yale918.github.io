import java.util.*;
public class coordinate{
 
    public static void main(String[] args){
        Scanner pause = new Scanner(System.in);
        coordinate.lineDraw(30,10);
        char escCode = 0x1B;
        int row = 10; int column = 10;
        System.out.print(String.format("%c[%d;%df",escCode,row,
                    column));
        System.out.print("hello world");
        pause.nextInt();
        //System.out.println("hello world");
    }
     
    public static void lineDraw(int x, int y){
        System.out.print(" "); 
        for (int i=0; i<x; i++){ System.out.print("-"); }
        
        System.out.println();  
        for (int i=0; i<y; i++){ 
            System.out.print("|"); 
            for(int j=0; j < x; j++){ System.out.printf(" ");}
            System.out.printf("|");
            System.out.println();
        } 
        
        
        System.out.print(" "); 
        for (int i=0; i<x; i++){ System.out.print("-"); } 
        
        System.out.println(); 
        
    }    
    
    public static void coord(int x, int y){
        for (int i=0; i<y; i++){
            System.out.println("");
        }
        for (int i=0; i<x; i++){
            System.out.print(" ");
        } 
    }
}
