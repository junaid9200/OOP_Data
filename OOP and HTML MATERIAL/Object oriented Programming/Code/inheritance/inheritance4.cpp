#include <iostream>

using namespace std;

class Person {
	private:
		string name;
		int age;
   	public: 
		Person(string name="N/A", int age=0){
			setName(name);
			setAge(age);
		}  
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
		Student(string name="N/A", int age=0, int rollNo=0, char sec='-') : Person(name, age){
			setRollNo(rollNo);
			setSec(sec);
		}
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
	Student ali={"Ali Imran", 12, 01, 'A'};
	
	cout<<"name:\t"<<ali.getName()<<endl;
	cout<<"age:\t"<<ali.getAge()<<endl;
	cout<<"rollno:\t"<<ali.getRollNo()<<endl;
	cout<<"sec:\t"<<ali.getSec()<<endl;
}
