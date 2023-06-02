#include <iostream>
using namespace std;
//Creating class named complex.
class complex 
{
private:
    float real; //class data members.
    float imag; //class data members.
public:
	//creating member function to set value.
    void set(float real, float imag) {
       this-> real = real;
       this->imag = imag;
    }
//creating member function to display.
    void disp() {
        if (imag >= 0) {
            cout << real << "+" << imag << "i" << endl;
        } else {
            cout << real << imag << "i" << endl;
        }
    }
//creating function to add the complex values.
    complex sum(complex c) {
        complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
};

int main() {
    complex c1, c2, c3;//class objects.
    float real,imaginary,real1,img1;
    cout<<"Enter the real number for number 1:";
    cin>>real;
    cout<<"enter the imaginary number for number 1 :";
    cin>>imaginary;
    c1.set(real,imaginary);
    cout << "Complex Number 1: ";
    c1.disp();//function call.
    cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Enter the real number for number 2 :";
    cin>>real1;
    cout<<"enter the imaginary number for number 2 :";
    cin>>img1;
    c2.set(real1,img1);
    c3 = c1.sum(c2);
    cout << "Complex Number 2: ";
    c2.disp();
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "Sum of Complex Number 1 and Complex Number 2: ";
    c3.disp();
}

