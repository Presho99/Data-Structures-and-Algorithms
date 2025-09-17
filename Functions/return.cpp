#include<iostream>
using namespace std;
double getbase(){
    double base;
    cout<<"Enter base: ";
    cin>>base;
    return base;
}

double getheight(){
    double height;
    cout<<"Enter height: ";
    cin>>height;
    return height;
}


double compute(double b, double h){
        double area=0.5*b*h;
        return area;
}

void display(double ans){
    cout<<"Result is "<<ans;
}

int main(){
    double x,y,z;
    x=getbase();
    y=getheight();
    z=compute(x,y);
    display(z);
    return 0;
}