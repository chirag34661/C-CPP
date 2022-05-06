#include<iostream>
using namespace std;
void introduceMe(string name,string fname,string city,int age=0){
    cout<<"My name is "<<name<<"."<<endl;
    cout<<"My father's name is "<<fname<<"."<<endl;
    cout<<"I am from "<<city<<"."<<endl;
    cout<<"I am "<<age<<" years old."<<endl;
}
int main(){
    string name,fname,city;
    int age;

    cout<<"Name:";
    cin>>name;
    cout<<"Father's Name:";
    cin>>fname;
    cout<<"City:";
    cin>>city;
    cout<<"Age:";
    cin>>age;
    system("cls");

    introduceMe(name,fname,city,age);
system("pause>0");
}
