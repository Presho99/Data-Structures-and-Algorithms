#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int> pancakes;

    pancakes.push(1);
    pancakes.push(2);
    pancakes.push(3);

    cout<<"Top pancake is "<<pancakes.top() <<endl;
    pancakes.pop();
    cout<<"Now the top pancake is "<<pancakes.top() <<endl;
    return 0;
}
