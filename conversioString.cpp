#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
string s;
cout<<"Enter the string: ";
cin>>s;
cout<<"1.To convert your string in all upper case letter"<<endl<<"2.To convert your string in all lower case letter"<<endl;
cout<<"Enter option:";
cin>>n;

if(n==1){
transform(s.begin(),s.end(),s.begin(),::toupper);
cout<<s<<endl;}

else if(n==2){
transform(s.begin(),s.end(),s.begin(),::tolower);
cout<<s<<endl;}


system("pause>0");
}
