package train;
import java.util.*;
//import java.io.*;

public class TrainOrder {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("hello world");
		System.out.println("程式啟動載入所有車次資訊");
		//Train[] TrainList = new Train[5];
		//TrainList[0].TrainNO = 203;
		TrainDB TDB = new TrainDB();
		//TDB.printTrainNO();
		//TDB.printTrainStation();
		TDB.printTrainInfo();
		
		while(true){
			int userInput;
			System.out.println("1.查詢車次與訂票  2.查詢訂票紀錄  0.離開");
			Scanner scan = new Scanner(System.in);
			userInput = scan.nextInt();
			
			
			switch (userInput){
			case 1: 
				TDB.queryTicket();
				TDB.orderTicket();
				TDB.showPrice();
				break;
			case 2:
				break;
			case 0:
				System.out.println("user terminated");
				userInput = scan.nextInt();
				break;
			}
		}
		
		
		
		
		
		//System.out.println("TrainNO="+T.TrainNO);
		
		
		
		
		
		
		
	}

}
