#include<bits/stdc++.h>
using namespace std;
class bank{
private:
    int x,y,amt;
    double pass_x,pass_y;
      char a;
public:
    bank(){
    x=500;
    y=500;
    pass_x=155;
    pass_y=123;
    cout<<"Enter username(x,y): ";
    cin>>a;
    }
    void menu(){
        int opt;
        double pass;
        if(a=='x'){
                system("cls");
            cout<<"Enter pin:";
        cin>>pass;
        if(pass==pass_x){
                system("cls");
    cout<<"--------MENU--------"<<endl;
    cout<<"1.Debit money"<<endl<<"2.Credit money\n"<<"3.Check Balance"<<"\n4.Exit"<<endl;

    do{
            cout<<"Enter option:";
    cin>>opt;
    system("cls");
    switch(opt){
    case 1:cout<<"Enter amount: ";
    cin>>amt;
    system("cls");
    if(amt<x){
    x-=amt;
    cout<<"Current Balance: "<<x<<endl;
    cout<<"\n     Thank You!    ";}
    else{
        cout<<"Not enough money."<<endl;
        cout<<"\n     Thank You!    ";}
    break;
    case 2:cout<<"Enter amount: ";
    cin>>amt;
      system("cls");
    x+=amt;
    cout<<"Current Balance: "<<x<<endl;
    cout<<"\n     Thank You!    ";
    break;
    case 3:cout<<"Balance:"<<x<<endl;
    cout<<"\n     Thank You!    ";
    break;
    case 4:cout<<"Thank You!"<<endl;
    }
      }while(opt>4);
        }
        else{
                system("cls");
            cout<<"Entered wrong password.\nTry after some time...."<<endl;
            cout<<"\n     Thank You!    ";}
        }


    else if(a=='y'){
            system("cls");
            cout<<"Enter Pin: ";
            cin>>pass;
    if(pass==pass_y){
            system("cls");
    cout<<"--------MENU--------"<<endl;
    cout<<"1.Debit money"<<endl<<"2.Credit money\n"<<"3.Check Balance"<<"\n4.Exit"<<endl;
    do{

                    cout<<"Enter option:";
    cin>>opt;
     system("cls");
    switch(opt){
    case 1:cout<<"Enter amount: ";
    cin>>amt;
    system("cls");
    if(amt<y){
    y-=amt;
    cout<<"Current Balance: "<<y;
    cout<<"\n     Thank You!    ";
    }
    else{
        cout<<"Not enough money."<<endl;
        cout<<"\n     Thank You!    ";}
    break;
    case 2:cout<<"Enter amount: ";
    cin>>amt;
    system("cls");
    y+=amt;
    cout<<"Current Balance: "<<y<<endl;
    cout<<"\n     Thank You!    ";
    break;
    case 3:cout<<"Balance:"<<y<<endl;
    cout<<"\n     Thank You!    ";
    break;
    case 4:cout<<"Thank You!"<<endl;
    }
      }while(opt>4);
    }
    else{
        system("cls");
        cout<<"Entered wrong password.\nTry after some time...."<<endl;
    }
     }
    }
};
int main(){
    bank b;
    b.menu();
system("pause>0");
}
