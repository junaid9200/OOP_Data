#include <iostream>
#include <cmath>
using namespace std;

class Shapes {
public:
    Shapes() {
        cout << "Shapes constructor called" << endl;
    }
    virtual ~Shapes() {
        cout << "Shapes destructor called" << endl;
    }
    virtual double area() = 0;
};

class TwoDShapes : public Shapes {
public:
    TwoDShapes() {
        cout << "2D Shapes constructor called" <<endl;
    }
    virtual ~TwoDShapes() {
        cout << "2D Shapes destructor called" << endl;
    }
    virtual double area() = 0;
};

class ThreeDShapes : public TwoDShapes {
public:
    ThreeDShapes() {
        cout << "3D Shapes constructor called" << endl;
    }
    ~ThreeDShapes() {
        cout << "3D Shapes destructor called" << endl;
    }
    virtual double area() = 0;
    virtual double volume() = 0;
};

class Circle : public TwoDShapes {
private:
    double radius;
public:
    Circle(double r) : radius(r) {
        cout << "Circle constructor called" << endl;
    }
    ~Circle() {
        cout << "Circle destructor called" << endl;
    }
    double area() {
        return 3.14159 * radius * radius;
    }
};

class Square : public TwoDShapes {
private:
    double side;
public:
    Square(double s) : side(s) {
        cout << "Square constructor called" << endl;
    }
    ~Square() {
        cout << "Square destructor called" << endl;
    }
    double area() {
        return side * side;
    }
};

class Cube : public ThreeDShapes {
private:
    double length;
    double width;
    double height;
public:
    Cube(double l, double w, double h) : length(l), width(w), height(h) {
        cout << "Cube constructor called" << endl;
    }
    ~Cube() {
        cout << "Cube destructor called" << endl;
    }
    double area() {
        return 2 * (length * width + width * height + height * length);
    }
    double volume() {
        return length * width * height;
    }
};

class Pyramid : public ThreeDShapes {
private:
    double base;
    double height;
public:
    Pyramid(double b, double h) : base(b), height(h) {
        cout << "Pyramid constructor called" << endl;
    }
    ~Pyramid() {
        cout << "Pyramid destructor called" << endl;
    }
    double area() {
        return base * base + 2 * base * sqrt(pow(base / 2, 2) + height * height);
    }
    double volume() {
        return (base * base * height) / 3;
    }
};

int main() {
    Shapes* shapesArray[6];

    shapesArray[0] = new Circle(5);
    shapesArray[1] = new Square(7);
    shapesArray[2] = new Cube(3, 4, 5);
    shapesArray[3] = new Pyramid(6, 8);
    shapesArray[4] = new Circle(2.5);
    shapesArray[5] = new Square(10);

    for (int i = 0; i < 6; i++) {
        cout << "Area: " << shapesArray[i]->area() << endl;
        TwoDShapes* twoDShape = dynamic_cast<TwoDShapes*>(shapesArray[i]);
        if (twoDShape) {
            cout << "2D Shape area: " << twoDShape->area() << endl;
        }
        ThreeDShapes* threeDShape = dynamic_cast<ThreeDShapes*>(shapesArray[i]);
        if (threeDShape) {
            cout << "3D Shape area: " << threeDShape->area() << endl;
            cout << "Volume: " << threeDShape->volume() << endl;
        }
        delete shapesArray[i];
        cout << endl;
    
	}}


