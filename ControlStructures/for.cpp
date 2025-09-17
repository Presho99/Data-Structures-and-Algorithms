// 10 by 10 multiplication table
#include<iostream>
using namespace std;
int main(){
    for(int row=1; row<=10; row++){
        for(int col=1; col<=10; col++){
            cout<<row*col <<"\t";
        }
        cout<<endl;
    }
return 0;
}
