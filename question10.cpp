#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x";
    cin>>x;
    int*ptr=&x;
    cout<<*ptr<<endl;
    *ptr=45;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    return 0;





}