#include<iostream>
using namespace std;
int getPositiveNumber(){
    int x;
    cout<<"Enter a positive number";
    cin>>x;
    return x;
}

void printResult(int x){
    cout<<"The number you entered is "<<x;

}

int main(){
    int valued;
    valued=getPositiveNumber();
    printResult(valued);


}