#include <bits/stdc++.h>
using namespace std;
class Student
{
    float roll_no, percentage;
    string name;
    static int count;

public:
    void getData()
    {
        count++;
        cout << "Enter name:- ";
        cin >> name;
        cout << "Enter roll no:- ";
        cin >> roll_no;
        cout << "Percentage:- ";
        cin >> percentage;
    }
    void showData()
    {
        cout << "Name:- " << name << "\n"
             << "Roll no:- " << roll_no << "\n"
             << "Percentage:- " << percentage << "\n\n";
    }
    static int Counting()
    {
        return count;
    }
};
int Student::count;
int main()
{
    Student s1, s2;
    int number;
    s1.getData();
    s1.showData();
    s2.getData();
    s2.showData();
    number = Student::Counting();
    cout << number;
}
