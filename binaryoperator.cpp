#include<iostream>
using namespace std;
class Distance{
private:
    int f,i;
public:
    Distance(){
        cout<<"Enter distance(feet,inches): ";
        cin>>f>>i;
    }
    void operator +(Distance obj){
    int F,I;
    F=f+obj.f;
    I=i+obj.i;
    while(I>=12){
        F++;
        I=I-12;
    }
    cout<<"Distance= "<<F<<"feet"<<I<<"inches";
    }
};
int main(){
Distance D1,D2;
system("cls");
D1+D2;
system("pause>0");
}
