#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    int n=5;
    int i,pos,value;

    cout<<"Array elements are: \n";
    for(i=0;i<n;i++){
        cout<<"\nElement at index "<<i << "is" <<a[i];
    }
    cout<<"\nEnter position of nsertion of new element: ";
    cin>>pos;
    cout<<"\nEnter the new value or element to insert: ";

    cin>>value;

    for(i=n-1;i>pos;i--){
        a[i+1]=a[i];
    }

return 0;
}