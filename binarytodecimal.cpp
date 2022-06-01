#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,dec=0,i=0;
    cout<<"Enter binary number: ";
    cin>>n;
    while(n>0){
        dec=dec+(n%10)*pow(2,i);
        n=n/10;
        i++;
    }
    system("cls");
    cout<<"Decimal number= "<<dec;
system("pause>0");
}
