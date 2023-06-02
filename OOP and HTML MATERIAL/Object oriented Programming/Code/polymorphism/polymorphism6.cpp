#include <iostream>

using namespace std;


class Shape {
	
	public:
		virtual void draw() = 0;
		virtual double area() = 0;	
};

class Rectangle: public Shape {

	private:
		double length, width;
	public:
		Rectangle(double l, double w) {
			length = l;
			width = w;
		}

		void draw(){
			cout<<"Drawing a rectangle"<<endl;
		}
		
		double area(){
			return length*width;
		}
};

class Circle: public Shape {
	private:
		double radius;
	public:
		Circle (double r) {
			radius = r;
		}

		void draw(){
			cout<<"Drawing a Circle"<<endl;
		}

		double area(){
			return 3.14*radius*radius; // pi*r*r
		}
};

int main() {
	
	Rectangle *rect = new Rectangle(4.3, 5.9);
	Circle *circ = new Circle(3.2);

	//Shape sh;  // Syntax Error

	Shape *shape[] = {rect, circ};
	
	cout<<"shape[0]->area(): "<<shape[0]->area()<<endl;
	cout<<"shape[1]->area(): "<<shape[1]->area()<<endl;

}
