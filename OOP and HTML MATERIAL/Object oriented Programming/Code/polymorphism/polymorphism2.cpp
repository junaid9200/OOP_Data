#include <iostream>

using namespace std;

class baseClass {
	private:
		int x;
	public:
		baseClass(int u=0){
			x = u;
		}
		
		virtual void print(){
			cout<<"In baseClass x = "<<x<<endl;
		}
};


class derivedClass: public baseClass {
	private:
		int a;
	public:
		derivedClass(int u=0, int v=0): baseClass(u){
			a = v;
		}

		void print(){
			cout<<"In derivedClass ***: "<<endl;
			baseClass::print();
			cout<<"In derivedClass a = "<<a<<endl;
		}
   	
};


void callPrint(baseClass &p){
	p.print();
}

int main() {

	baseClass one(5);
	
	derivedClass two(3, 15);

	one.print();
	cout<<endl;

	two.print();
	cout<<endl;

	cout<<"*** Calling the function callPrint ***"<<endl;	

	callPrint(one);
	cout<<endl;

	callPrint(two);	

}
