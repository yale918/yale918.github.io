#include<iostream>
using namespace std;

class A{
    public:
        A(){    cout<<"in A's constructor"<<endl;  }
        ~A(){    cout<<"in A's destructor"<<endl;  }
};

class B:public A{
    public: 
        B(){    cout<<"in B's constructor"<<endl;  }
        ~B(){    cout<<"in B's destructor"<<endl;  }
};

int main(){
    B b;

}
