#include<iostream>
using namespace std;
class base{
public:
 virtual void display(){
 cout<<"Base class"<<endl;
 }
};
class derived:public base
{
public:
 virtual void display(){
 cout<<"Derived class";
 }
};
int main(){
base *ptr;
base B;
derived D;
ptr=&B;
ptr->display();
ptr=&D;
ptr->display();
system("pause>0");
}
