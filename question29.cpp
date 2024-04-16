#include<iostream>
using namespace std;
class Fruit{
	private :string name,color;
	         double weight;
	public  :Fruit(){
		    name="strawbeery";color="pink ";weight=0.0;
	       }
	       Fruit(string nm,string col,double wegt){
		    name=nm;color=col;weight=wegt;
	       }
	
	 		virtual void taste()=0;//abstract method
	         void show()
	         {
	         	cout<<"Name "<<name<<"   Color:"<<color<<"   "<<weight<<endl;
			 }
};
class Apple:public Fruit{
	     public :Apple()
	     {
	     	cout<<"apple destructor is called"<<endl;
		 }
		 Apple(string name,string color,double weight):Fruit(name,color,weight){}
		 
        void taste()
        {
        	cout<<"Apple taste : sweet "<<endl;
		}
		void appleJam()
		{
		cout<<"AppleJam Created "<<endl;
		}

};


class Mango:public Fruit{
	public :Mango(){
		cout<<" mango destructor is called"<<endl;
	}
	        Mango(string name,string color,double weight):Fruit(name,color,weight)
	        {
			}
		void taste()
        {
        	cout<<"mango taste : sweet and sour "<<endl;
		}
		void pulp()
		{
			cout<<"Pulp extact of Mango"<<endl;
		}
	};
	class Orange:public Fruit{
		public:Orange(){
			cout<<"orange destructor is called"<<endl;
		}
		Orange(string name,string color,double weight):Fruit(name,color,weight)
		{
		}
	   	void taste()
        {
        	cout<<"orange taste :   sour "<<endl;
		}
		void juice(){
            cout<<" juice is tasty"<<endl;
        }
    };
    int main(){
       // Fruit f1('grapes','green',12.325);
 Fruit*ptr;
 Mango*m;
 string name,colour;
 double weight;
 cout<<"enter the detail of mango"<<endl;
 cin>>name;
 cin>>colour;
 cin>>weight;
 m=new Mango(name,colour,weight);
 //ptr=m;
 ptr->show();
 m->show();
// m.taste();
 //m.pulp();
 Apple a;
 return 0;
    }