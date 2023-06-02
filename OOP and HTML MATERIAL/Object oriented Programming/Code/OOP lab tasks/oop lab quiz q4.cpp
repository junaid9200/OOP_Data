#include<iostream>
using namespace std;


int main(){
	
	int miles,gallon ,trips,avg,totalavg=0;
	
	cout<<"\nEnter the number of trips : ";
	cin>>trips;
	for(int i=0;i<trips;i++){
	
	cout<<"Enter the miles driven :";
	cin>>miles ;
	cout<<"\nEnter number of gallons :";
	cin>>gallon;
	
	
	avg=miles/gallon;
	totalavg=totalavg+avg;
	cout<<"\nMiles per gallon is :"<<avg<<endl;
}
	
	cout<<"Average of all the number is : "<<totalavg<<endl;
}

