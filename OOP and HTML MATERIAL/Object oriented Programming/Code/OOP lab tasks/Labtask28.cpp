#include<iostream>
using namespace std;
class shape
{
   public:
   virtual	void draw ()
   	{
   		cout<<"the shape is drawing :"<<endl;
	   }
	   
};
class rectangle
{
	int len,widt;
	public:
		void draw ()
		{
			cout<<"the rectangle is drawing :"<<endl;
		}
};
class circle:public shape
{
	public:
		void draw()
		{
			cout<<"the circle is drawing :"<<endl;
		}
};
int main()
{
   shape a;
   rectangle b;
   circle c;
    
   shape* ptr;
   reactangle 
   ptr=&a;
   ptr->draw();
   b.draw();
   ptr=&c;
   ptr->draw();
   
}

