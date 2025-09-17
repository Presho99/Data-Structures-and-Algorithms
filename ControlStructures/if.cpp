// Determine the largest of 3 values
#include<iostream>
using namespace std;
int main(){
    double a,b,c,large;
    cout<<"Enter three values: ";
    cin>>a>>b>>c;
    large=a;
    if(b>large){
        large=b;
    }
    if(c>large){
        large=c;
    }
    cout<<"The largest number is "<<large;
}