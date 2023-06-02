/* example 1 */

#include <iostream>
using namespace std;

struct Student{
	int rollNo;
	string name;
	char sec;
};
Student ali, zain;

int main(){

	
	ali = {01, "Ali khan", 'A'};

	cout<<"Roll no: "<<ali.rollNo<<endl;
	cout<<"Name: "<<ali.name<<endl;
	cout<<"sec: "<<ali.sec<<endl<<endl;	

	zain = {02, "Haji zain", 'B'};

	cout<<"Roll no: "<<zain.rollNo<<endl;
	cout<<"Name: "<<zain.name<<endl;
	cout<<"sec: "<<zain.sec<<endl<<endl;

}