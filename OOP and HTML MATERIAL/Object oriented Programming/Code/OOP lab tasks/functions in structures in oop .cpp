#include<iostream>
using namespace std;
struct student//structure where student is class 
{
	int rollnumber;//declaration.
	char section;
	string name;
};
int studentfun(student x)//function declaration with arguments.
{
	cout<<"Enter your name :";//printf statemen.
	cin>>x.name;//taking values .
	cout<<"Enter your roll number :";
	cin>>x.rollnumber;
	cout<<"Enter your class :";
	cin>>x.section;		
	
};
int main()
{
	student ali;//objetc declare.mlg
	    int students;
	    cout<<"Enter the number of students : ";
	    cin>>students;
	    for(int i=1;i<=students;i++)
	    {
	    	studentfun(ali);
	    	cout<<endl;
		}
}

