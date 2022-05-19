#include<iostream>
using namespace std;
class area{
private:
    int l,b;

public:
    area(int a,int x){
        l=a;
        b=x;
    }
    void Area(){
    int A;
    A=l*b;
    cout<<"The area of the rectangle is "<<A<<endl;
    }
    void perimeter(){
    int P;
    P=2*(l+b);
    cout<<"The perimeter of the rectangle is "<<P<<endl<<endl;

    }
};
int main(){
    area a1(10,20),a2(20,30);
    a1.Area();
    a1.perimeter();
    a2.Area();
    a2.perimeter();

system("pause>0");
}
