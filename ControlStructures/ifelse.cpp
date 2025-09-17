// Example: Determining the largest of three values
#include<iostream>
using namespace std;
int main(){
    double a,b,c,large;
    cout<<"Enter three values: ";
    cin>>a>>b>>c;
    if(a>b){
        large=a;
    }else{
        large=b;
    }
    if(c>large){
        large=c;
    }
    cout<<"The largest value is "<<large;


    
}