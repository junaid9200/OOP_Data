#include <iostream>

using namespace std;

class Pet {
	protected:
		string Name;
	public:
		Pet(string n){Name=n;}
		
		virtual void makeSound(){cout<<Name<<": pet sound!!!"<<endl;}
};

class Dog: public Pet {
	public:
		Dog(string n):Pet(n){}
	
		void makeSound(){cout<<Name<<": Woof!!! woof!!!"<<endl;}
};




int main() {

	Pet *a_pet;
	a_pet = new Dog("Max");
	a_pet->makeSound();

}
