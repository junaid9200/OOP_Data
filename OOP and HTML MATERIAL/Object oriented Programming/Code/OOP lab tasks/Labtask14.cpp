#include<iostream>
using namespace std;
class boat

{
	protected:
		string boatlength;
	public:
		
		boat(string boatlength)
		{
			this->boatlength=boatlength;
		}
		void swim()
		{
			cout<<"I am swimming ..."<<endl;
		}
};
class plane
{
	protected:
	string maxalt;
	public:
	
		plane(string maxalt)
		{
			this->maxalt=maxalt;
		}
		void fly()
		{
			cout<<"I am Flying...."<<endl;
		}
};
class skimmer:protected boat,protected plane
{
	private:
		int passengernu;
		public:
			string name;
			skimmer(string boatlength,string maxalt,int passengernu,string name):boat(boatlength),plane(maxalt)
			{
				this->passengernu=passengernu;
				this->name=name;
			}
			void swimandfly()
			{
				cout<<endl;
				boat::swim();
				plane::fly();
				
			}
			void display()
			{
				cout<<"Skimmer name : "<<name<<endl<<"length       : "<<boatlength<<endl<<"Max Altitude : "<<maxalt<<endl<<"Passengers   : "<<passengernu<<endl;
			}
	
};
int main()
{
	skimmer s("40ft","13000tf",3,"Swim and Fly");
	s.display();
	s.swimandfly();
}

