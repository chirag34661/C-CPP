#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int ar[n],temp;
    cout<<"Enter "<<n<<" elements of array: ";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(ar[i]<ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
           }
        }
      }
      cout<<"The second largest number in array is s"<<ar[1];
system("pause>0");
}

