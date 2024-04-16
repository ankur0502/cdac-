#include<iostream>
using namespace std;
int main(){
    const int x=30;
    const int *ptr=&x;
    cout<<" values in ptr"<<*ptr<<"    address=   "<<ptr<<endl;
    int y=30;
    ptr=&y;
 cout<<" values in ptr"<<*ptr<<"    address=   "<<ptr<<endl;

    return 0;



}