#include<iostream>
using namespace std;
void add(){
    int x,y;
cout<<"Enter 2 numbers: ";
cin>>x>>y;
cout<<"The sum of the numbers is "<<x+y<<endl;
}
void add(int x,int y){
cout<<"The sum of the numbers is "<<x+y<<endl;
}
void add(int x,int y,int z){
cout<<"The sum of the numbers is "<<x+y+z<<endl;
}
int main(){
    add();
    add(10,20);
    add(10,20,50);
    system("pause>0");
}



