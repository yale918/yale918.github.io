import java.io.*;
import java.net.*;
import java.util.Scanner;

class tcpClient{
	public static int port = 20;	
	
	public static String lineScan(){
		Scanner scan = new Scanner(System.in);
		return scan.nextLine();
	}

	public static void main(String args[]) throws Exception {
		int count=0;

		System.out.println("[*] tcpClient connect to port: "+port);
		
		Socket client = new Socket(args[0], port);
		OutputStream out = client.getOutputStream();
		InputStream in = client.getInputStream();
		StringBuffer buf = new StringBuffer();		
		
		BufferedReader br = new BufferedReader(new InputStreamReader(in));
		
		while(true){
			/*
				while(br.readLine()!=null){
					System.out.println("> in getMessage");
					int x = in.read(); count ++;
					byte b = (byte) x;
					buf.append((char) b);
					if(x=='~'){
						buf.deleteCharAt(count-1);
						System.out.println("> server: "+buf);
						count = 0;
						buf.setLength(0);
					}

				}
			*/	
					
				System.out.println("say to server: ");
				String results = lineScan();  results += "~";
				out.write( results.getBytes("UTF-8"));
		
		}
	}

}
