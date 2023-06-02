#include <iostream>

using namespace std;

int main() {
	
	int * array = new int[3];

	array[0] = 2;
	array[1] = 5;
	array[2] = 7;
	array[3] = 9;
	array[4] = 11;

	cout<<"&array = "<<&array<<endl;
	cout<<"array = "<<array<<endl;
	cout<<"&array[0] = "<<&array[0]<<endl;
	cout<<"array[0] = "<<array[0]<<endl;
	cout<<"&array[1] = "<<&array[1]<<endl;
	cout<<"array[1] = "<<array[1]<<endl;
	cout<<"&array[2] = "<<&array[2]<<endl;
	cout<<"array[2] = "<<array[2]<<endl;
	cout<<"&array[3] = "<<&array[3]<<endl;
	cout<<"array[3] = "<<array[3]<<endl;
	cout<<"&array[4] = "<<&array[4]<<endl;
	cout<<"array[4] = "<<array[4]<<endl;

	delete array;

	int * x = new int;

	*x = 1 ;
	
	cout<<"\n&x = "<<&x<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"*x = "<<*x<<endl;

	delete x;					
	
}