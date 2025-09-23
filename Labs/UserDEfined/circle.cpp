#include<iostream>
using namespace std;
double calculateCircleArea(double r){
    double area;
    area=3.14159*r*r;
    return area;
}
int main(){
    double radius,a;
    cout<<"Enter a radius";
    cin>>radius;
    a=calculateCircleArea(radius);
    cout<<a;
}