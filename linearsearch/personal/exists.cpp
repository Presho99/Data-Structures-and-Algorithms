#include<iostream>
using namespace std;
int i, n;
int array[100];

int getValues(){
    cout<<"How many values? ";
    cin>>n;
    cout<<"Enter values: ";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    return array[i];
}

int compareValues(int c){
    int s;
    cout<<"Enter search key";
    cin>>s;
    if (c==s){
        cout<<"Found";
    }else{
        cout<<"Not found";
    }
    return 0;
}
int main(){

}