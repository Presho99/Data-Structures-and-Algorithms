#include<iostream>
using namespace std;

void insertionSort(int a[], int length){
    for(int i=1; i<length;i++){
        int key =a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
          a[j+1]=a[j];
          j=j-1;  
        }
        a[j+1]=key;
    }
}

int main(){
    int a[]={8,12,6,27,9,3,4,1};
    int length=8;

    insertionSort(a,length);
    for(int i=0; i<length; i++){
        cout<<a[i] <<endl;
    }
    return 0;
}