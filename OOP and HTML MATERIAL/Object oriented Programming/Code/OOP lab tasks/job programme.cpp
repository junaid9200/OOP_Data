#include<iostream>
using namespace std;
int main()
{
	int age;
	char status;
	cout<<"Enter your age :";
	cin>>age;
	cout<<"Are you married Yes/No :";
	cin>>status;
	if(age>25 || status==1)
	{
		cout<<"you are not eligible for job ";
	}
	else
	{
		cout<<"you are eligible for job ";
	}
}
