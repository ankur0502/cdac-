#include<iostream>
using namespace std;
int main(){
    int i,prime=1,n;
    cout<<"enter the no"<<endl;
    cin>>n;
    for(i=1;i<50;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
        }
        if(prime==1)
        cout<<"the prime no are"  <<endl;
       // cout<<"
        else
        cout<<"no is not prime no"<<endl;
        return 0;
}