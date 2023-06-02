#include <iostream>

using namespace std;

class A {
	private:
		int x;
	public:
		A(){ x = 5;}

		A fun() {
			x = x + 3;
			return *this;
		}
		
		void print(){ cout<<x<<endl; }

};

int main(){

	A obj1, obj2;
	obj1 = obj2.fun();
	obj1.print();
	obj2.print();

}