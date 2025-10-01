#include<iostream>
using namespace std;
int i,n;
double array[100];

void getValues(){
    cout<<"How many values?: ";
    cin>>n;
    cout<<"Enter values: ";
    for(i=0; i<n; i++){
        cin>>array[i];
    }
}

void findMax(){
    if(n<=0){
        cout<<"No values";
    }
    double mx=array[0];
    for(i=1;i<n;i++){
        if (array[i] >mx ){
            mx=array[i];
        }
        cout<<"Maximum value is "<<mx;
    }
}
int main(){
    getValues();
    findMax();
    return 0;
}