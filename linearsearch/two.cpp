#include<iostream>
using namespace std;
int i,n;
double array[100];
void getvalues(){
	cout<<"how many values ";
	cin>>n;
	cout<<"Enter values  in a sorted manner";
	for(i=0; i<n; i++){
		cin>>array[i];
	}
}
void binarysearch(){
	double searchkey;
	cout<<"Enter value to search ";
	cin>>searchkey;
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		if(array[mid]==searchkey){
			cout<<searchkey<<" found at index "<<mid;
			break;
		}else if(searchkey<array[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	if(low>high)
	cout<<searchkey<<" was never found ";
}

int main(){
	getvalues();
	binarysearch();
}