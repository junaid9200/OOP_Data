#include <iostream>
#include <string.h>
using namespace std;

struct Student{
	int rollNo = 0;
	string name = "N/A";
	char section = '-';
};

int main(){

	Student ali = {1, "Ali Imran", 'A'};

	Student *ptr;
	ptr = &ali;

	cout<<"\nrollNo: "<<ptr->rollNo<<endl;
	cout<<"Name: "<<ptr->name<<endl;
	cout<<"Section"<<ptr->section<<endl;

	Student *ptr1 = new Student;

	cout<<"\n\nrollNo: "<<ptr1->rollNo<<endl;
	cout<<"Name: "<<ptr1->name<<endl;
	cout<<"Section"<<ptr1->section<<endl;

}
