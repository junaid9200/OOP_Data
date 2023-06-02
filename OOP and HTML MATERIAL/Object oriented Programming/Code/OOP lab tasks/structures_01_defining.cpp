/* example 1 */

#include <iostream>
using namespace std;

struct Student{
	int rollNo;
	string name;
	char sec;
};

Student zain;

void display(){
	Student ali = {01, "ali khan", 'A'};

	cout<<"Roll no: "<<ali.rollNo<<endl;
	cout<<"Name: "<<ali.name<<endl;
	cout<<"sec: "<<ali.sec<<endl<<endl;
	
}

int main(){

		

	display();	

	zain.rollNo = 02;
	zain.name = "zain Khan";
	zain.sec = 'B';

	cout<<"Roll no: "<<zain.rollNo<<endl;
	cout<<"Name: "<<zain.name<<endl;
	cout<<"sec: "<<zain.sec<<endl<<endl;

}