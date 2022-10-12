#include<iostream>
using namespace std;
class Num2;
class Num1{
private:
    int n;
public:
    Num1(){
    cout<<"Enter any number: ";
    cin>>n;
    }
    friend void Max(Num1 &y,Num2 &z);
};
class Num2{
private:
    int n;
public:
    Num2(){
    cout<<"Enter any number: ";
    cin>>n;
    }
    friend void Max(Num1 &y,Num2 &z);
};
void Max(Num1 &y,Num2 &z){
    int a,b;
    a=y.n;
    b=z.n;
    system("cls");
if(a>b){
    cout<<"Class first conains greater number.";
}
else{
    cout<<"Class second contains greater number.";
}
}
int main()
{
    Num1 x;
    Num2 y;
    Max(x,y);
system("pause>0");
}
