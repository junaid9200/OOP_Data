#include <iostream>

using namespace std;

class Person {
	protected:
		int age;
   	public: 		 
		void setAge(int age){
			this->age = age;
		}
		int getAge(){
			return age;
		}
};

class Student: public Person {
   	public:
		void print(){
			cout<<"Age = "<<age<<endl;
		}
};

int main() {
	
	Student ali;
	
	ali.setAge(12);			//  age = 12
	ali.setAge(ali.getAge()+1);		//  age = age + 1
	ali.print();	
}
