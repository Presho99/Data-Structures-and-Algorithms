#include<iostream>
using namespace std;
int i,n;
double array[100];

void getvalues(){
    cout<<"how many values ";
    cin>>n;
    cout<<"Enter values ";
    for(i=0; i<n; i++){
        cin>>array[i];
    }
}

void display(){}

void linearsearch(){
    double searchkey;
    cout<<"Enter value to search ";
    cin>>searchkey;
    //actual searching now
    for(i=0; i<n; i++){
        if(array[i]==searchkey){
            cout<<searchkey<<" found at index "<<i;
            break;
        }
    }
    if(i>=n){
        cout<<searchkey<<" was never found ";
    }
}

int main(){
    getvalues();
    linearsearch();
}
