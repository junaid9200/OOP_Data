#include <iostream>

using namespace std;

int main() {
	
	int * array = new int;

	*array = 2;
	cout<<"array = "<<array<<endl;
	cout<<"*array = "<<*array<<endl;
	
	array++;
	*array = 5;
	cout<<"array = "<<array<<endl;
	cout<<"*array = "<<*array<<endl;

	array++;
	*array = 7;
	cout<<"array = "<<array<<endl;
	cout<<"*array = "<<*array<<endl;

	array++;
	*array = 9;
	cout<<"array = "<<array<<endl;
	cout<<"*array = "<<*array<<endl;
				
	
}