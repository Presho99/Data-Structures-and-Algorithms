#include<iostream>
using namespace std;
void greetUser(string name){
    cout<<"Welcome "<<name;

}
int main(){
    string username;
    cout<<"Enter your name: ";
    cin>>username;
    greetUser(username);
    return 0;
}