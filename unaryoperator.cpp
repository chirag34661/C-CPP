#include<iostream>
using namespace std;
class demo{
private:
    int x,y,z;
public:
    demo(){
       cout<<"Enter 3 numbers: ";
       cin>>x>>y>>z;
    }
    void operator -(){
    x=-x;
    y=-y;
    z=-z;
    }
    void display(){
    cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z;
    }
};
int main(){
demo D;
-D;
D.display();
system("pause>0");
}
