#include <iostream>

using namespace std;

class A {
	public:
		int x;
		int y;
		void fun() {
			cout<<x<<"\t"<<(*this).x<<"\t"<<this->y<<endl;
		}

};

int main(){

	A obj;
	obj.x = 3;
	obj.y = 5;
	obj.fun();

}