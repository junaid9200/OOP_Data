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
	friend class Operations;		
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
	void display(Complex &obj){
			cout << obj.real<<" + "<<obj.img<<"i"<<endl;
		}	
};
int main(){
	Complex c1(8,10);
	Complex c2(3,7);
	Operations op;
	cout <<"First  Number:\t\t";
	op.display(c1);
	cout <<"Second Number:\t\t";
	op.display(c2);
	Complex c3 = op.function_add(c1,c2);
	Complex c4 = op.function_sub(c1,c2);
	cout <<"-------------------------------"<<endl;
	cout <<"Addition Of Numbers:   ";
	op.display(c3);
	cout <<"-------------------------------"<<endl;
	cout <<"Subtraction Of Numbers: ";
	op.display(c4);
	cout <<"-------------------------------"<<endl;
}
