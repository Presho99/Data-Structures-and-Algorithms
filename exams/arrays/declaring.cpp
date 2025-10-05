#include<iostream>
using namespace std;
// Write a C++ program that declares an array of
//  5 integers, assigns values manually 
// (no user input), and then prints all the values.
int main(){
    // declare and initialize array
    int numbers[5]={10,20,30,40,50};
    for (int i=0;i<5;i++){
        cout<<numbers[i] << " ";
    }
    cout<<endl;
    return 0;

}
