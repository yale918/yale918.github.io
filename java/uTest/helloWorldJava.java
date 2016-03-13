import java.lang.*;
import java.util.Scanner;
import java.io.*;

public class HelloWorldJava{
	
	public static String callScanner(){
		Scanner scanner = new Scanner(System.in);
		String result = scanner.nextLine();
		return result;
	}

	
	
	public static void main(String[] args){
		System.out.println("Hello, World");
		
		System.out.println(callScanner());

	
	
	}
}
