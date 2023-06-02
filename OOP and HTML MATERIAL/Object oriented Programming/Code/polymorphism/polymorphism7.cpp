#include <iostream>

using namespace std;


class A {
	
	public:
		void fun1() {cout<<"fun1 of class A"<<endl;}
		virtual void fun2(){cout<<"fun2 of class A"<<endl;}
		virtual void fun3() = 0;
};

class B: public A {
	public:
		void fun1(){cout<<"fun1 of class B"<<endl;}
		void fun2(){cout<<"fun2 of class B"<<endl;}
};

class D: public B {
	public: 
		void fun1(){cout<<"fun1 of class D"<<endl;}
		void fun2(){cout<<"fun2 of class D"<<endl;}
		void fun3(){cout<<"fun3 of class D"<<endl;}
};

void outFun(A &obj){
	obj.fun1();
	obj.fun2();
	obj.fun3();
}

int main(){
	D obj;
	outFun(obj);
}