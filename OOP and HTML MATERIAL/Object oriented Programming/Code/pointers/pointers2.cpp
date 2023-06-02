#include <iostream>

using namespace std;

int main() {
						
	int array[3] = {2, 5, 7};
	int * p;
	
	cout<<"&array = "<<&array<<endl;
	cout<<"array = "<<array<<endl;
	cout<<"&array[0] = "<<&array[0]<<endl;
	cout<<"array[0] = "<<array[0]<<endl;
	cout<<"&array[1] = "<<&array[1]<<endl;
	cout<<"array[1] = "<<array[1]<<endl;
	cout<<"&array[2] = "<<&array[2]<<endl;
	cout<<"array[2] = "<<array[2]<<endl;
	cout<<"\np = array"<<endl; p = array;
	cout<<"&p = "<<&p<<endl;
	cout<<"\np = "<<p<<endl;
	cout<<"*p = "<<*p<<endl;
	cout<<"\np++ "<<endl; p++; 
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl;
	cout<<"\np++ "<<endl; p++;
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl;
}