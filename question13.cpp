#include<iostream>
using namespace std;
int main(){
    char ch[10];
    cout<<"enter the element into the array"<<endl;
    for(int i=0;i<7;i++)
    cin>>ch[i];
    char*ptr;
    ptr=ch;
     cout<<"the character element are"<<endl;
    for(int i=0;i<7;i++)
{
cout<<*ptr+i<<endl;
}
cout<<"the end of program"<<endl;





}