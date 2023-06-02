/* example 1 */

#include <iostream>
using namespace std;

struct Student{
	int rollNo = 10 ;
	string name;
	char sec = 'B';
};
Student ali, zain;

int main(){

	
	ali = {01, "ali khan", 'A'};

	cout<<"Roll no: "<<ali.rollNo<<endl;
	cout<<"Name: "<<ali.name<<endl;
	cout<<"sec: "<<ali.sec<<endl<<endl;	

	zain.name = ali.name;

	cout<<"Roll no: "<<zain.rollNo<<endl;
	cout<<"Name: "<<zain.name<<endl;
	cout<<"sec: "<<zain.sec<<endl<<endl;

}