#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
temp=a;
a=b;
b=temp;
cout<<"the swap value are:"<<endl;
cout<<a<<b<<endl;
}
int main(){
    swap(10,20);
    return 0;

}