#include <iostream>
using namespace std;
class electricity{
 private:
     char name[10];
     int cons,charge;
 public:
    void getData(){
    cout<<"Enter user name: ";
    cin>>name;
    cout<<"Enter the amount of energy consumed in units: ";
    cin>>cons;
    }
    void display(){
    system("pause>0");
    if(cons<=100){
        charge=60*cons;
    }
    else if(cons>100 && cons<=200){
        charge=80*cons;
    }
    else if(cons>200){
        charge=92*cons;
    }
    cout<<"Name= "<<name<<endl<<"Charge= "<<charge;
    }
};
int main(){
electricity Bill;
Bill.getData();
Bill.display();
system("pause>0");
}
