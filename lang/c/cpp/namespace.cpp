#include<iostream>
using namespace std;

    namespace bearB{
        void cout(){
            std::cout<<"hello bearB"<<endl;
        };
    }    
    namespace bearS{
        void cout(){
            std::cout<<"hello bearS"<<endl;
        };
    }

    int main(){
        bearB::cout();
        bearS::cout();
    }

