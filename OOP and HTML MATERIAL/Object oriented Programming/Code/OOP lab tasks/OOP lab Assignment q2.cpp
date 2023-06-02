#include<iostream>
using namespace std;
class Employee{
	private:
		string empName;
		int empNumber;
	public:
		void getData(){
			cout <<"Name: "<<empName <<endl;
			cout <<"Number: "<<empNumber <<endl;
		}
		void putdata(string empName, int empNumber){
			this->empName=empName;
			this->empNumber=empNumber;
		}	
};

class Manager:public Employee{
	private:
		char title;
		double club_dues;
	public:
		void getData_manager(){
			cout <<"Manager Title: "<<title <<endl;
			cout <<"Manager Club Dues: "<<club_dues <<endl;
		}
		void putData_manager(char title, double club_dues){
			this->title=title;
			this->club_dues=club_dues;
		}	
};

class Scientist:public Employee{
	private:
		int publications;
	public:
		void getData_scientist(){
			cout <<"Scientist Publications: "<<publications <<endl;
		}
		void putData_scientist(int publications){
			this->publications=publications;
		}	
};

class Programmer:public Employee{
	private:
		double salary;
		string expertise;
	public:
		void getData_programmer(){
			cout <<"Programmer Salary: "<<salary <<endl;
			cout <<"Programmer Expertise: "<<expertise <<endl;
		}
		void putData_programmer(double salary, string expertise){
			this->salary=salary;
			this->expertise=expertise;
		}	
};
int main(){
	// variables
	string empName;
	int empNumber;
	char title;
	double club_dues;
	int publications;
	double salary;
	string expertise;
	
	// classes objects
	Manager manager_obj;
	Scientist scientist_obj;
	Programmer programmer_obj;
	
	// adding details of data members.....
	cout <<"Lets Add details of Manager,Scientist and Programmer....\n\nManager:"<<endl;
	
	// adding manager details
	cout <<"\nEnter Manager Name: ";
	getline(cin,empName);
	cout <<"Enter Manager Number: ";
	cin >>empNumber;
	cout <<"Enter Manager Title (character only!): ";
	cin >>title;
	cin. ignore(25,'\n');
	cout <<"Enter Club Dues: ";
	cin >>club_dues;
	manager_obj.putdata(empName,empNumber);
	manager_obj.putData_manager(title,club_dues);

	
	// adding Scientist details
	cout <<"\nScientist:"<<endl;
	cout <<"\nEnter Scientist Name: ";
	cin. ignore(25,'\n');
	getline(cin,empName);
	cout <<"Enter Scientist Number: ";
	cin >>empNumber;
	cout <<"Enter Scientist Publications (integer): ";
	cin >>publications;
	scientist_obj.putdata(empName,empNumber);
	scientist_obj.putData_scientist(publications);
	
	
	//adding Programmer detials
	cout <<"\nProgrammer:"<<endl;
	cout <<"\nEnter Programmer Name: ";
	cin. ignore(25,'\n');
	getline(cin,empName);
	cout <<"Enter Programmer Number: ";
	cin >>empNumber;
	cout <<"Enter Programmer Salary Amount: ";
	cin >>salary;
	cout <<"Enter Programmer Expertise: ";
	cin >>expertise;
	
	programmer_obj.putdata(empName,empNumber);
	programmer_obj.putData_programmer(salary,expertise);
	
	//displaying data
	cout <<"\n\nDisplaying Data Entered...."<<endl; 
	cout <<"Manager:"<<endl;
	manager_obj.getData();
	manager_obj.getData_manager();
	cout <<"\n\nProgrammer:"<<endl;
	programmer_obj.getData();
	programmer_obj.getData_programmer();
	cout <<"\n\nScientist:"<<endl;
	scientist_obj.getData();
	scientist_obj.getData_scientist();
}
