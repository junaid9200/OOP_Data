/* example 1 */

#include <iostream>
using namespace std;

struct Student{
	int rollNo = 01;
	string name = "ali";
	char sec = 'A';
	int marks[5];
};
Student ali, zain;

int main(){

	
	ali.marks[0] = 10;
	ali.marks[1] = 20;
	ali.marks[2] = 30;
	ali.marks[3] = 40;
	ali.marks[4] = 50;
	
	cout<<"Roll no: "<<ali.rollNo<<endl;
	cout<<"Name: "<<ali.name<<endl;
	cout<<"sec: "<<ali.sec<<endl<<endl;
	cout<<"ali.marks[0] = "<<ali.marks[0]<<endl;	

	

}