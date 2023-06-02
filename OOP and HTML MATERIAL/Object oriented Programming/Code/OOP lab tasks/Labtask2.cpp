#include<iostream>
using namespace std;
class Animal{
	protected:
		string name;
		string color;
	public:
		Animal(string name, string color){
			this-> name = name;
			this-> color = color;
		}
	virtual void display()=0;	
	~Animal(){
		cout <<"\nDestructor for Animal is called."<<endl;
	}	
};
class Deer:public Animal{
	bool hasAntlers;
	public:
		Deer(bool hasAntlers,string name, string color):Animal(name,color){
			this-> hasAntlers = hasAntlers;
		}
		void display(){
			cout <<"Deer Informations..."<<endl;
			cout <<"Name: "<<name<<endl;
			cout <<"Color: "<<color<<endl;
			cout <<"Antlers: "<<(hasAntlers ? "Yes" : "No")<<endl;
		}
};
class Zebra:public Animal{
	string stripe_pattern;
	public:
		Zebra(string stripe_pattern,string name, string color):Animal(name,color){
			this-> stripe_pattern = stripe_pattern;
		}
		void display(){
			cout <<"\n\nZebra Informations..."<<endl;
			cout <<"Name: "<<name<<endl;
			cout <<"Color: "<<color<<endl;
			cout <<"Stripe-Pattern: "<<stripe_pattern<<endl;
		}
};
int main(){
	Deer deer(true,"White-tailed deer","Brown");
	Zebra zebra("Vertical-Stripes","Breeze","White and Black");
	deer.display();
	zebra.display();
}
