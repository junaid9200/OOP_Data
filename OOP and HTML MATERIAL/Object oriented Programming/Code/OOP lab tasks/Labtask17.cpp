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
			cout <<"\nDeer Informations..."<<endl;
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
			cout <<"\nZebra Informations..."<<endl;
			cout <<"Name: "<<name<<endl;
			cout <<"Color: "<<color<<endl;
			cout <<"Stripe-Pattern: "<<stripe_pattern<<endl;
		}
};
void displayAll(Animal* animals[],int counter){
	for(int i=0;i<counter;i++){
		animals[i]->display();
	}
}

int main(){
	int counter = 4;
	Animal* animals[counter];
	animals[0] = new Deer(true,"White-tailed deer","Brown");
	animals[1] = new Zebra("Vertical-Stripes","Breeze","White and Black");
	animals[2] = new Deer(false,"Red-Deer","Light-Brown");
	animals[3] = new Zebra("Vertical-Stripes","Marty","White and Gray");
	displayAll(animals,counter);
	for(int i=0;i<counter;i++){
		delete animals[i];
	}
}
