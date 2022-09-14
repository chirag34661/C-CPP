#include<iostream>
using namespace std;
class employee{
    private:
    int id,basesal,DA,it;
    float sal;
    char name[20],desig[10];
    public:
    void get_data(){
        cout<<"Enter name of the employee: ";
        cin>>name;
        cout<<"Enter ID of the employee: ";
        cin>>id;
        cout<<"Enter designation of the employee: ";
        cin>>desig;
        cout<<"Enter salary of the employee: ";
        cin>>sal;
    }
    void show_data(){
       cout<<"The name of the employee is "<<name;
       cout<<"\nThe ID of the employee is "<<id;
       cout<<"\nThe designation of the employee is "<<desig;
       cout<<"\nThe salary of the employee is "<<sal<<endl<<endl;
    }
    void Netsal(){
        cout<<"*********To get net salary*********"<<endl<<"Enter basic Salary: ";
        cin>>basesal;
        cout<<"Enter daily allowance: ";
        cin>>DA;
        cout<<"Enter income tax: ";
        cin>>it;
        cout<<"\n\nThe net salary of the employee is "<<basesal+DA-it<<"Rs";
    }
};
int main(){
    employee X;
    X.get_data();
    system("cls");
    X.show_data();
    X.Netsal();

    system("pause>0");
}
