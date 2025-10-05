#include<iostream>
using namespace std;

int main(){
    // declare and initialize the array
    int a[]={4,8,1,5,9,0,2,7,3,6};
    // Store the number of elements in the array
    int length=10;
    // outer loop. Runs 10 times from i=0 to i=9
    for (int i=0;i<length;i++){
        // inner loop. Runs throght the array. Compares a[j]with its neighbor a[j+1]
        for(int j=0; j<length-1;j++){
            // checks whether current element is greater than the next one
            if(a[j]>a[j+1]){
                // Stores current element in variable called temp
                int temp =a[j];
                // Moves the next element a[j]+1 intp the current position a[j]
                a[j]=a[j+1];
                // Place origina element stored in temp into the next position [J+1]
                a[j+1]=temp;
            }
        }
    }
    // Prints the sorted array
    for(int i=0; i<length; i++){
        cout<<a[i]<<"";
    }
    cout<< endl << endl;

    return 0;
}