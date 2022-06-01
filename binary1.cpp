#include<iostream>
using namespace std;
class heavier{
private:
    int h;
public:
    heavier(){
    cout<<"Enter any number: ";
    cin>>h;
    }
    void operator >(heavier obj){
    if(h>obj.h)
        cout<<h<<" is greater.";
    else
        cout<<obj.h<<" is greater.";
    }
};
int main(){
heavier H1,H2;
H1>H2;
}
