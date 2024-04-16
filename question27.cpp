#include<iostream>
using namespace std;
class box1{
    private:int length;
    int height;
    int breath;
    public:box1(){
        length=10;
        breath=15;
        height=20;
    }
    box1(int l,int b,int h)
    {
        length=l;
        breath=b;
        height=h;
    }
    int getlength()
    {
        return length;
    }
    int getbreath(){
        return breath;
    }
        int getheight(){
        return height;
        }
        void setlength(int length)
        {
            this->length=length;
        }
         void setbreath(int breath)
        {
            this->breath=breath;
        }
             void setheight(int height)
        {
            this->height=height;

    }
    void display()
    {
        cout<<" length=  "<<length<<" breath=  "<<breath<<" height= "<<height<<endl;
    }
    bool issame(const box1 &obj)
    {
        if(this->length==obj.length && this->breath==obj.breath &&this->height==obj.height)
        {
    return true;
    }
    else
    { 
    return 0;
    }
    }
    box1(const box1 &obj){
       this->length=obj.length;
       this->breath=obj.breath;
       this->height=obj.height; 
    }
    
    

};
int main(){
  box1 obj;
  obj.display();
  box1 obj1(25,36,42);
  obj.setlength(15);
  obj1.display();
  int c=obj1.issame(obj);
  if(c==1)
    cout<<"both boxes are same"<<endl;
  
  else
    cout<<"both boxes are not same"<<endl;
  
box1 b3( obj1);
b3.display();
     int d=obj1.issame(b3);
      if(d==1)
    cout<<"both boxes are same"<<endl;
  
  else
    cout<<"both boxes are not same"<<endl;
  
  return 0;  
}