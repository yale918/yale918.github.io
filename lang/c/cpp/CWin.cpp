#include<iostream>
#include<cstdlib>
using namespace std;
class CWin{
    private:
        //private data member
        char id;
        int width, height;

    public:
        //public static data member
        static int number;
        
        //constructor 
        CWin(char i='N', int w=0, int h=0):id(i),width(w),height(h){
            cout << "object initializing.."<<endl;
            number ++;
        }

        //public function member
        void set_data(char i, int w, int h){
            id = i;
            width = w;
            height = h;
        }
        
        int area(void){
            return width*height;
        }
        
        void show(){
            cout<<"object:"<< id <<"/ width:"<<width<<"/ height:"<<height<<"/ area: "<< area()<<endl;
        }

        //friend function definition 
        friend CWin findLargest(CWin [], int);
        friend void showLargest(CWin);
};

CWin findLargest(CWin win[], int n){
    int max=0,flag;
    CWin CWinFlag;
    for(int i=0; i<n; i++){
        win[i].show();
        if(win[i].area()>max){

            max = win[i].area();
            CWinFlag = win[i]; 
        }
    }
    return CWinFlag;
}

void showLargest(CWin win){
    cout << "the largest area is: " << win.area() << endl;

}

int main(){
    CWin win[3];
    win[0].set_data('A',60,70);
    win[1].set_data('B',15,40);

    showLargest( findLargest(win,3) );
    cout<<"we created "<< CWin::number <<" Cwin objects"<<endl;
    return 0;

}


