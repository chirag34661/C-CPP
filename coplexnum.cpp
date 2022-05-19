#include<iostream>
using namespace std;
class complexnum{
private:
    int x,y;

public:
    complexnum()//default constructor
    {
    cout<<"Enter real and imaginary part of complex number: ";
    cin>>x>>y;
    }

    complexnum(int a,int b)//parameterised constructor
    {
    x=a;
    y=b;
    }

    void showcnum(){
    cout<<"Complex number= "<<x<<"+i"<<y<<endl;
    }
};
int main(){
complexnum c(2,3),b;
c.showcnum();
b.showcnum();
system("pause>0");
}
