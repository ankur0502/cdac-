#include<iostream>
using namespace std;
class area{
private: int length;
int breath;
int height;
public:void assignvalue(){
cout<<"enter the value "<<endl;
cin>>length>>breath>>height;
    }
    public:void area1(){
      int area=2*(length*breath+breath*height+height*length);
        cout<<"the area of cuboid be="<<area<<endl;


    }
};
int main(){
    area obj;
    obj.assignvalue();
    obj.area1();
return 0;
}