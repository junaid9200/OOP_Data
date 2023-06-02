#include<iostream>
using namespace std;
struct student
{
	int rollnumber;
	char section;
	string name;
};
int main()
{
 struct student x;
    x.rollnumber=20;
    x.name="shabnam";
    x.section='A';

    cout<<"Roll: "<<x.rollnumber<<endl;
    cout<<"Name: "<<x.name<<endl;
    cout<<"section :"<<x.section;
}
