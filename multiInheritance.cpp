#include<iostream>

using namespace std;
class Student{
private:
      char name[100];
      char enroll[15];
public:
     void getdata(){
         cout<<"Enter Your Name: ";
         cin>>name;
         cout<<"Enter Your Enrollment no.: ";
         cin>>enroll;
     }
     void showdata(){
         cout<<"The name of the student is "<<name<<endl;
         cout<<"The enrollment no. of the student is "<<enroll<<endl<<endl<<endl;
     }
};

class marks:public Student{
private:
      int P,C,M;
public:
    void getmarks(){
        cout<<"Enter marks in Physics: ";
        cin>>P;
        cout<<"Enter marks in Chemistry: ";
        cin>>C;
        cout<<"Enter marks in Maths: ";
        cin>>M;
    }
    void showmarks(){
        cout<<"Marks in Physics "<<P<<endl;
        cout<<"Marks in Chemistry "<<C<<endl;
        cout<<"Marks in Maths "<<M<<endl<<endl;
    }
};
class sports:public marks{
private:
    char grade;
public:
    void getgrade(){
        cout<<"Enter grade of the student:";
        cin>>grade;
    }
    void showgrade(){
        cout<<"Grade of the student is "<<grade;
    }
};
int main()
{    sports s;
     s.getdata();
     system("cls");
     s.getmarks();
     system("cls");
     s.getgrade();
     system("cls");
     s.showdata();
     s.showmarks();
     s.showgrade();
system("pause>0");
}
