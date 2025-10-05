#include<iostream>
using namespace std;

int main(){
    int n, a[10];
    cout<<"How many numbers? (max 10): ";
    cin>>n;

    cout<<"Enter "<<n <<" numbers";
    for(int i=0; i<n;i++){
        cin>>a[i];
        cout<<a[i] <<" " <<endl;
         
    }
return 0;
}