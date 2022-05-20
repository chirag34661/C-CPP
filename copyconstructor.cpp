#include<iostream>
using namespace std;
class ABC{
private:
    int x,y;
public:
    ABC(){
     x=10;
     y=20;
    }
    ABC(int a,int b){
    x=a;
    y=b;
    }
    ABC(ABC &obj)
  {
     x=obj.x;
     y=obj.y;
  }

  void putdata(){
  cout<<"x= "<<x<<endl<<"y= "<<y<<endl<<endl;
  }
};
int main(){
 ABC A,b(10,30),c(A),d=b;
 A.putdata();
 b.putdata();
 c.putdata();
 d.putdata();

system("pause>0");
}
