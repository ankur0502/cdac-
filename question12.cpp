#include<iostream>
using namespace std;
void swap(int*m,int*n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
    cout<<"the swap values are:"<<endl;
    cout<<*m  <<*n<<endl;


}





int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    swap(&a,&b);
    return 0;

}