import java.util.*;
import java.io.*;

public class prac{
  public static void main(String argv[]){
	char out = ' ';
	Scanner scanner =  new Scanner(System.in);
	int a =scanner.nextInt();

	if(a>=20){
	  if(a>=40){
		if(a>=60){
		  if(a>=80)	out = 'A';
		  else	out = 'B';
		}
		else
		  out = 'C';
	  }
	  else
		out = 'D';
	}
	else
	  out = 'E';
  	
	System.out.println("GPA is:"+out);

  
  }
}
