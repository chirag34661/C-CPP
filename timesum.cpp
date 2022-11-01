#include<iostream>
using namespace std;
class Time{
public:
    int hh,mm,ss;

    void Input(){
    cout<<"Enter the time: ";
    cin>>hh>>mm>>ss;
    }

};
int main()
{
 Time T1,T2,T3;
 T1.Input();
 T2.Input();
 T3.hh=T1.hh+T2.hh;
 T3.mm=T1.mm+T2.mm;
 T3.ss=T1.ss+T2.ss;
 while(T3.ss>=60){
        T3.ss=T3.ss-60;
        T3.mm++;
    }
    while(T3.mm>=60){
        T3.mm=T3.mm-60;
        T3.hh++;
    }
    cout<<"The time is "<<T3.hh<<":"<<T3.mm<<":"<<T3.ss;

system("pause>0");
}
