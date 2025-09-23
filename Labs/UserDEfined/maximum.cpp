#include<iostream>
using namespace std;
int findMax(int num1, int num2){
    int large;

    if (num1<num2){
        large=num2;
    }else{
        large=num1;
    }
    return large;
    


}
int main(){
    int a,b,maximum;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    maximum=findMax(a,b);
    cout<<maximum;
    return 0;
}