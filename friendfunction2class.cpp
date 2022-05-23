#include<iostream>
using namespace std;
class Distance2;
class Distance1{
private:
    int f,i;
public:
    Distance1(){
    cout<<"Enter distance in feet & inches: ";
    cin>>f>>i;
    }
    friend void addDistance(Distance1 &D1,Distance2 &D2);
};
class Distance2{
private:
    int f,i;
public:
    Distance2(){
    cout<<"Enter distance in feet & inches: ";
    cin>>f>>i;
    }
    friend void addDistance(Distance1 &D1,Distance2 &D2);
};
void addDistance(Distance1 &D1,Distance2 &D2){
int F,I;
F=D1.f+D2.f;
I=D1.i+D2.i;
while(I>=12){
    F++;
    I-=12;
}
system("cls");
cout<<"The sum of distances is  "<<F<<"feet "<<I<<"inches";
}
int main(){
     Distance1 d1;
     Distance2 d2;
     addDistance(d1,d2);
system("pause>0");
}
