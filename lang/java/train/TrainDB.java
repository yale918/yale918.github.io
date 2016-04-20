package train;

import java.util.Scanner;

public class TrainDB {
	public Train[] TrainT = new Train[10];
	public int startPosition;
	public int endPosition;
	public String[] positionName = {"台北","板橋","桃園","中壢","新竹","台中","彰化","斗六","嘉義","台南","高雄","屏東","台東","花連","宜蘭"}; 
	
	//order information
	public int orderTrainNO;
	public int orderUserID;
	public int orderNumberOfTicket;
	public int certificateNumber;
	
	
	
	TrainDB(){
		for(int i=0; i<TrainT.length; i++){
            TrainT[i] = new Train();//this will call constructor.
        }
		
		
		TrainT[0].TrainNO = 203; 
		TrainT[0].PassStation[0] = "花蓮";
		TrainT[0].PassStation[1] = "宜蘭";
		TrainT[0].PassStation[2] = "台北";
		TrainT[0].TrainFlag = 2;
		
		TrainT[1].TrainNO = 401;
		TrainT[1].PassStation[0] = "台東";
		TrainT[1].PassStation[1] = "花蓮";
		TrainT[1].PassStation[2] = "宜蘭";
		TrainT[1].PassStation[3] = "台北";
		TrainT[1].TrainFlag = 3;
		
		TrainT[2].TrainNO = 207;
		TrainT[2].PassStation[0] = "花蓮";
		TrainT[2].PassStation[1] = "宜蘭";
		TrainT[2].PassStation[2] = "台北";
		TrainT[2].TrainFlag = 2;
		
		
		TrainT[3].TrainNO = 211;
		TrainT[3].PassStation[0] = "花蓮";
		TrainT[3].PassStation[1] = "宜蘭";
		TrainT[3].PassStation[2] = "台北";
		TrainT[3].PassStation[3] = "板橋";
		TrainT[3].TrainFlag = 3;
		
		TrainT[4].TrainNO = 411;
		TrainT[4].PassStation[0] = "花蓮";
		TrainT[4].PassStation[1] = "宜蘭";
		TrainT[4].PassStation[2] = "台北";
		TrainT[4].PassStation[3] = "板橋";
		TrainT[4].PassStation[4] = "桃園";
		TrainT[4].TrainFlag = 4;
		
		
/*
		TrainT[5].TrainNO = 402;
		TrainT[6].TrainNO = 206;
		TrainT[7].TrainNO = 408;
		TrainT[8].TrainNO = 410;
		TrainT[9].TrainNO = 412;
*/
	}
	
	public void printTrainNO(){
		System.out.println("TrainNO="+TrainT[0].TrainNO);
		
	}
	public void printTrainStation(){
		System.out.println("TrainNO=" + TrainT[0].PassStation[0]);
		
	}
	public void printTrainInfo(){
		System.out.println("******************");
		for (int i=0; i<4; i++){
			
			System.out.print(TrainT[i].TrainNO+" ");
			for (int j=0; j<TrainT[i].TrainFlag; j++){
				System.out.print(TrainT[i].PassStation[j]+"->");
			}
			System.out.println("||");
		}
		System.out.println("******************");	
	}
	
	public void queryTicket(){
		printTrainInfo();
		Scanner scan = new Scanner(System.in);
		System.out.println("請選擇起點(0.台北 1.板橋 2.桃園 3.中壢 4.新竹 5.台中 6.彰化 7.斗六 8.嘉義 9.台南 10.高雄 11.屏東 12.台東 13.花連 14.宜蘭)");
		startPosition = scan.nextInt();
		System.out.println("請選擇起點(0.台北 1.板橋 2.桃園 3.中壢 4.新竹 5.台中 6.彰化 7.斗六 8.嘉義 9.台南 10.高雄 11.屏東 12.台東 13.花連 14.宜蘭)");
		endPosition = scan.nextInt();
	}
	
	public void showPrice(){
		System.out.println(positionName[startPosition]+" -> "+positionName[endPosition]);
		System.out.println("車次   發車點   終點站   票價");
		
	}

	public void orderTicket(){
		
		Scanner scan = new Scanner(System.in);
		System.out.println("請輸入訂票車次：");
		orderTrainNO = scan.nextInt();
		
		System.out.println("身分證字號：");
		orderUserID = scan.nextInt();
		
		System.out.println("購買張數：");
		orderNumberOfTicket = scan.nextInt();
		
		int randomCertificateNumber = (int )(Math.random() * 999 + 1);
		System.out.println("請輸入驗證碼："+ certificateNumber);
		certificateNumber = scan.nextInt();
		
		System.out.println("訂票結果為：");
	}
	
}
