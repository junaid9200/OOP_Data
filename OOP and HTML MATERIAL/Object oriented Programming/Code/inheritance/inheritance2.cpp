#include <iostream>

using namespace std;

class Person {
	private:
		string name;
		int age;
   	public:   
		void setName(string name){
			this->name = name;
		}
		string getName(){
			return name;
		}	
		void setAge(int age){
			this->age = age;
		}
		int getAge(){
			return age;
		}
};

class Student: public Person {
   	private:
		int rollNo;
      		char sec;
   	public:
      		void setRollNo(int rollNo){
			this->rollNo = rollNo;
		}
		int getRollNo(){
			return rollNo;
		}
		void setSec(char sec){
			this->sec = sec;
		}
		char getSec(){
			return sec;
		}
};

int main() {
	Student ali;
	ali.setName("Ali Imran");
	ali.setAge(12);
	ali.setRollNo(01);
	ali.setSec('A');
	
	cout<<"name:\t"<<ali.getName()<<endl;
	cout<<"age:\t"<<ali.getAge()<<endl;
	cout<<"rollno:\t"<<ali.getRollNo()<<endl;
	cout<<"sec:\t"<<ali.getSec()<<endl;
}
