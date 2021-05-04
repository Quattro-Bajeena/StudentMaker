#include<iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include<cmath>
#include<Windows.h>
using namespace std;

class A
{
    public:
    virtual void method_A() = 0;
    int number, aaa;
    A()
    {
        number = 5;
        aaa=1;

    }

};

class B : public A
{
    void method_A()
    {
        cout<<number<<endl;
        cout<<aaa<<endl;

    }
    public:
        void method1()
        {
            cout<<"aaaaaaaa"<<endl;

        }
    B()
    {
        number = 10;
    }
};
class based
{
public:
    based(){cout<<"jestem w konstrukoterze based"<<endl;};
    virtual ~based(){cout<<"jestem w destrutokrze based"<<endl;};
    virtual void opis(){cout<<"based"<<endl;};

};

class cringe : public based
{
public:
    cringe(){cout<<"jestem w konstrukoterze cringe"<<endl;};
    ~cringe(){cout<<"jestem w destrutokrze cringe"<<endl;};
    void opis(){cout<<"cringe"<<endl;};
};

based* funkcja(int a)
{
    based * wskaz;
    switch(a)
    {
    case 1:
        wskaz = new based;
        break;
    case 2:
        wskaz = new cringe;
        break;
    }
    return wskaz;

}



int main()
{

based * wsk;
wsk = new based;
wsk->opis();
delete wsk;
cout<<"-------------"<<endl;
wsk=new cringe;
wsk->opis();
delete wsk;
cout<<"-------------"<<endl;

funkcja(2)->opis();



for (int i=1;i<=100;i++)
{

    cout<<i<<": ";
    bool fb=false;
    if(i%3==0){cout<<"fizz"; fb=true;}
    if(i%5==0){cout<<"buzz";fb=true;}
    if(fb==false){cout<<i;}

    cout<<"\n";
}


int aca_score = 10;
int phys_score = 20;
int soc_score = 30;

int highest_score = max(max(aca_score, phys_score), soc_score);
 cout<<"highesrt score: "<<highest_score<<endl;
}
