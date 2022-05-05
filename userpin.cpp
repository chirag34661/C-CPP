#include<iostream>
using namespace std;
int main()
{
    int userpin,pin,error=0;
    cout<<"Enter Userpin= ";
    cin>>userpin;
    system("cls");
    do{
        cout<<"Enter pin: ";
        cin>>pin;
        if(pin!=userpin)
            error++;
        system("cls");
    }while(error<3 && pin!=userpin);
  (error<3)?cout<<"Loading.........":cout<<"Blocked!";


    system("pause>0");
}
