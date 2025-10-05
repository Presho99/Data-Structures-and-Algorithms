#include<iostream>
using namespace std;

void selectionSort(int a[], int length){
    // outer loop starts at 0 and run s until length -2
    for(int i=0; i<(length-1); i++){
        // keeps track of the index of the smallest element found during the current pass
        int min_pos=i;
        // inner loop. finds the actual smallest element in the unsorted portion of the array
        for(int j=i+1; j<length; j++){
            // compares element at index j with element at index min_pos
           if(a[j]<a[min_pos]){
            // Update position of the current smallest element to j
            min_pos=j;
           } 
        }
        if(min_pos != i){
            int temp = a[i];
            a[i]=a[min_pos];
            a[min_pos]=temp;
        }
    }



}

int main(){
    int a[]={6,5,3,2,1,4};
    int length = 6;
    selectionSort(a,length);
    for(int i=0; i<length; i++){
        cout<<"a[" <<i << "]=" <<a[i] <<endl;
    }
    return 0;

}