import java.io.*;
import java.net.*;

class tcpServer{
	public static int port = 20;	
	
	public static void main(String args[]) throws Exception {
		int input = 0;
		int count = 0;
		boolean closeTag = false;
		ServerSocket serversocket = new ServerSocket(port);		
		System.out.println("[*] tcpServer start on port: "+port);
		
		
			
			Socket socket = serversocket.accept();
			
			OutputStream out = socket.getOutputStream();	
			out.write("From Server : Hi! please input a number!".getBytes("UTF-8"));		
			InputStream in = socket.getInputStream();
			StringBuffer buf = new StringBuffer();
			out.write("helloclient".getBytes("UTF-8"));
			try{
				while(true){
					int x = in.read(); count++; 
					if (x==-1) { System.out.println("in x==-1"); closeTag=true;  break; }
					byte b = (byte) x;
					buf.append((char) b);
					//System.out.println((char) b);
					if (x=='~') {
						//System.out.println("in x=='~'");
						buf.deleteCharAt(count-1);
						System.out.println("> client: "+buf);
						count = 0;
						buf.setLength(0); 
					}
					
				}
			}catch(Exception e){
				System.out.println("> client:  disconnect ");
				in.close();
				out.close();
				serversocket.close();
			}

	}
		
}

