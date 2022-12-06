#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cout<<"Enter the number you want : ";
    cin>>s;

    cout<<"Greatest number formed by the number that you have entered is ";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
    system("pause>0");
}
