#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> numbers;
    cout<<"size"<<numbers.size() <<endl;
    if(numbers.empty()){
        cout<<"Stack is empty" <<endl;
    }
    numbers.push(8);
    cout<<"size: " <<numbers.size() <<endl;

    if(!numbers.empty()){
        cout<<"Stack is not empty.";
    }
    cout<<"Top number: "<<numbers.top() <<endl;
    numbers.push(9);
    numbers.push(5);
    cout<<endl;
    cout<<"top: "<<numbers.top() <<endl;
    cout<<"size: "<<numbers.size() <<endl;
}