#include<iostream>
using namespace std;

double calculateAverage(double array[], int size){
    if(size==0){
        return 0.0;
    }
    double sum=0;

    for(int i=0;i<size;i++){
        sum=sum+array[i];
    }
    double average=sum/size;
    return average;
}

int main(){
   int n;
   double a[100];

   cout<<"How many elements: ";
   cin>>n;

   for(int i=0;i<n;i++){
    cout<<"Enter your numbers: ";
    cin>>a[i];   
   }
   double result=calculateAverage(a,n);
   cout<<result;
   return 0;
   
}