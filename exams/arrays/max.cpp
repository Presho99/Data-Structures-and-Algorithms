#include<iostream>
using namespace std;
int findMax(int array[], int size){
    int max=array[0];
    for(int i=0;i<size;i++){
        if(array[i] > max){
            max=array[i];
        }
    }
    return max;
}


int main(){
    int n, a[10];
    cout<<"How many elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the elements: ";
        cin>>a[i];
    }

    int result= findMax(a,n);
    cout<<"The largest number is "<<result;
}