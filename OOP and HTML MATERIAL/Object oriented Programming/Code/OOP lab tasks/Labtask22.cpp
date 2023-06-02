#include<iostream>
#include<string>
using namespace std;
class Complex{
	friend Complex addComplex(Complex &c1, Complex &c2);
	private:
		int real;
		int img;
	public:
		Complex(int real, int img){
			this->real = real;
			this->img = img;
		}
		void display(){
			cout << real<<" + "<<img<<"i"<<endl;
		}	
};
Complex addComplex(Complex &c1, Complex &c2){
	int sum_real;
	int sum_img;
	sum_real = c1.real + c2.real;
	sum_img = c1.img + c2.img;
	return Complex(sum_real,sum_img);
}
int main(){
	Complex c1(2,3);
	Complex c2(4,5);
	cout <<"First  Number: ";
	c1.display();
	cout <<"Second Number: ";
	c2.display();
	Complex c3 = addComplex(c1,c2);
	cout <<"---------------------"<<endl;
	cout <<"Sum Of Number: ";
	c3.display();
	cout <<"---------------------"<<endl;
	
}
