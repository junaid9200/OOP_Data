#include <iostream>

using namespace std;

class A {
	public:
		void fun1(){cout<<"fun1 of class A"<<endl;}
		virtual void fun2(){cout<<"fun2 of class A"<<endl;}
		void fun3(){cout<<"fun3 of class A"<<endl;}
		~A(){cout<<"destructor of A"<<endl;}
};


class B: public A {
	public:
		virtual void fun1(){cout<<"fun1 of class B"<<endl;}
		void fun2(){cout<<"fun2 of class B"<<endl;}
		void fun3(){cout<<"fun3 of class B"<<endl;}
		~B(){cout<<"destructor of B"<<endl;}   	
};

class C: public B {
	public:
		void fun1(){cout<<"fun1 of class C"<<endl;}
		void fun2(){cout<<"fun2 of class C"<<endl;}
		virtual void fun3(){cout<<"fun3 of class C"<<endl;}
		~C(){cout<<"destructor of C"<<endl;}
   	
};


void outFun(B &obj){
	obj.fun1();
	obj.fun2();
	obj.fun3();
}

int main() {

	C objC;
	outFun(objC);

}
