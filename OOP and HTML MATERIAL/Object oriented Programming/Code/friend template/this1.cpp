#include <iostream>

using namespace std;

class A {
	public:
		int x;
		void fun() {
			cout<<x<<"\t"<<(*this).x<<"\t"<<this->x<<endl;
		}

};

int main(){

	A obj;
	obj.x = 3;
	obj.fun();
}