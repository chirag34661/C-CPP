#include<iostream>
using namespace std;
class Distance{
private:
    int f,i;
public:
    Distance(){
    cout<<"Enter distance in feet and inches: ";
    cin>>f>>i;
    }
friend void addDistance(Distance &obj1,Distance &obj2);
};
void addDistance(Distance &obj1,Distance &obj2){
int F,I;
F=obj1.f+obj2.f;
I=obj1.i+obj2.i;
while(I>=12){
    F++;
    I-=12;
}
system("cls");
cout<<"Distance is  "<<F<<"feet "<<I<<"inches.\n";
}
int main(){
    Distance D1,D2;
    addDistance(D1,D2);

system("pause>0");
}
