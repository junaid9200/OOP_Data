#include<iostream>
#include<string>
using namespace std;
class Complex{
	public:
		int real;
		int img;	
		Complex(int real, int img){
			this->real = real;
			this->img = img;
		}
		void display(){
			cout << real<<" + "<<img<<"i"<<endl;
		}	
};
class Operations{
	public:
	Complex function_add(Complex &c1, Complex &c2){
		int sum_real;
		int sum_img;
		sum_real = c1.real + c2.real;
		sum_img = c1.img + c2.img;
		return Complex(sum_real,sum_img);
	}
	Complex function_sub(Complex &c1, Complex &c2){
		int sub_real;
		int sub_img;
		sub_real = c1.real - c2.real;
		sub_img = c1.img - c2.img;
		return Complex(sub_real,sub_img);
	}	
};
int main(){
	Complex c1(8,10);
	Complex c2(3,7);
	cout <<"First  Number:\t\t";
	c1.display();
	cout <<"Second Number:\t\t";
	c2.display();
	Operations op;
	Complex c3 = op.function_add(c1,c2);
	Complex c4 = op.function_sub(c1,c2);
	cout <<"-------------------------------"<<endl;
	cout <<"Addition Of Numbers:   ";
	c3.display();
	cout <<"-------------------------------"<<endl;
	cout <<"Subtraction Of Numbers: ";
	c4.display();
	cout <<"-------------------------------"<<endl;
}
