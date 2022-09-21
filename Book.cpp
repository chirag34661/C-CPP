#include <iostream>
using namespace std;
class book
{
private:
    int price;
    char title[30], book_id[10];

public:
    void getdata()
    {
        cout << "\nEnter the title of the book: ";
        cin >> title;
        cout << "Enter book id: ";
        cin >> book_id;
        cout << "Enter the price of the book: ";
        cin >> price;
    }
    void display()
    {
        cout << "\nThe title of the book is " << title;
        cout << "\nBook id- " << book_id;
        cout << "\nPrice- " << price << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the no. of books: ";
    cin >> n;
    book x[n];
    for (int i = 0; i < n; i++)
    {
        x[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        x[i].display();
    }

    system("pause>0");
}