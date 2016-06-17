#include <iostream>
#include <cstring>
using namespace std;

class A
{
    private:
        char *name;
        int ml,nol;
    public:
        A()
        {
            ml=32;
            name=new char[ml+1];
            name[0]='0';
            nol=-1;
        }
        A(const char _N[], const int _L)
        {
            ml=strlen(_N)+1;
            name = new char[ml+1];
            strcpy(name, _N);
            nol=_L;
        }
        A(const A& _Ani)
        {
            ml=strlen(_Ani.name);
            name=new char[ml+1];
            strcpy(name,_Ani.name);
            nol=_Ani.nol;
        }
        ~A(){delete []name;}
        friend ostream& operator <<(ostream& o, const A& a);
        friend istream& operator >>(istream& i, A& a);
        friend bool operator == (const A& x, const A& y);
};
int main()
{
}
ostream& operator <<(ostream& o,const A& a)
{
    o<<"動物名是: "<<a.name<<"\n有: "<<a.nol<<"條腿\n";
    return o;
}
istream& operator >>(istream& i, A& a)
{
    cout<<"請輸入動物名&有幾條腿: \n";
    i.getline(a.name,a.ml);
    i>>a.nol;
    return i;
}
bool operator == (const A& x, const A& y)
{
    if(strcmp(x.name,y.name)==0&&
            x.nol == y.nol)
        return true;
    else
        return false;
}

