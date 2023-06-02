#include <iostream>

using namespace std;

int main() {
						
	int x = 5;
	int * p = &x;
	
	cout<<"value of x: "<<x<<endl;
	cout<<"Address of x: "<<&x<<endl;
	cout<<"value of p: "<<p<<endl;
	cout<<"Address of p: "<<&p<<endl;
	cout<<"value of *p: "<<*p<<endl;
}