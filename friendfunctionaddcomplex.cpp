#include<iostream>
using namespace std;
class Complexnum{
private:
    int x,y;
public:
    Complexnum(){
    cout<<"Enter real & imaginary part of complex number: ";
    cin>>x>>y;
    }
friend void add_cnum(Complexnum &obj1,Complexnum &obj2){
      int R,I;
      R=obj1.x+obj2.x;
      I=obj1.y+obj2.y;
      system("cls");
     cout<<"Sum of complex number is "<<R<<"+i"<<I<<"."<<endl;
}
};
int main(){
    Complexnum c1,c2;
    add_cnum(c1,c2);
system("pause>0");
}
