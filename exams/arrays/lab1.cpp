#include<iostream>
using namespace std;

int main(){
   int n,a[10];
   cout<<"How many elements do you want to store: ";
   cin>>n;
   for(int i=0; i<n;i++){
           cout<<"Enter the elements: ";
           cin>>a[i];
          
   } 
    for(int i=0;i<n;i++){
     cout<<a[i] <<" "<<endl;
   }
  
   return 0;
}