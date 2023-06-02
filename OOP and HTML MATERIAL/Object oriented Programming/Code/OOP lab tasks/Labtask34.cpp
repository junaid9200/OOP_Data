#include<iostream>
using namespace std;
int main()
{
	int arr,arr1;
	int* ptr=new int[4];
	for(int i=0;i<4;i++)
	{
		cout<<"enter value "<<i<<"=";
		cin>>ptr[i];
	}
	cout<<endl;
		for(int i=0;i<4;i++)
	{
		cout<<"the values are :"<<ptr[i]<<endl;
	}
	cout<<endl;
	int* temp=ptr;
	temp[0]=10;
	temp[1]=10;
		for(int i=0;i<4;i++)
	{
		cout<<"the values are :"<<temp[i]<<endl;
	}
	delete []temp;
	cout<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"the values are :"<<ptr[i]<<endl;
	}
	
}
