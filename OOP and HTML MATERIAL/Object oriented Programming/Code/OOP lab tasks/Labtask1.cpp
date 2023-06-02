#include<iostream>

using namespace std;
//Creating class named Rectangle.
class Rectangle {
	
private:
	
    float length;    //class data members.
    float width;     //class data members.
    
public:
	//Setting the length in private.
    void setlength(float length) {
       this-> length = length;
    }
    //Setting the width in private.
    void setwidth(float width) {
        this-> width = width;
    }
    //Creaing the function of perimeter.
    float perimeter() {
        return 2 * (length + width);
    }
    //Creating the function of perimeter.
    float area() {
        return length * width;
    }
    //Creating the function to show the 1-Length & 2-Width.
    void show() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
    //Creating the function to check the area of both the Rectangle is same or not.
    int sameArea(Rectangle r) {
        return area() == r.area();
    }
};

int main() {
    Rectangle r1, r2;//Declaring the Class objects.

    r1.setlength(5);   //Setting the length for rectangle 1.
    r1.setwidth(2.5);  //Setting the width for rectangle 1.

    r2.setlength(5);    //Setting the length for rectangle 2.
    r2.setwidth(18.9);  //Setting the width for rectangle 2.

    cout << "Rectangle 1:\n";
    r1.show();
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Area: " << r1.area() << endl;

    cout << "\nRectangle 2:\n";
    r2.show();
    cout << "Perimeter: " << r2.perimeter() << endl;
    cout << "Area: " << r2.area() << endl;

    if (r1.sameArea(r2)) {
        cout << "\nRectangle 1 and Rectangle 2 have the same area.\n";
    }
    else {
        cout << "\nRectangle 1 and Rectangle 2 do not have the same area.\n";
    }

    r1.setlength(15);  //Updating the length of rectangle 2.
    r1.setwidth(6.3);  //Updating the width of rectangle 2.

    cout << "\nRectangle 1:\n";
    r1.show();
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Area: " << r1.area() << endl;

    cout << "\nRectangle 2:\n";
    r2.show();
    cout << "Perimeter: " << r2.perimeter() << endl;
    cout << "Area: " << r2.area() << endl;
    //Checking the area of both rectangles are same or not.
    if (r1.sameArea(r2)) {
        cout << "\nRectangle 1 and Rectangle 2 have the same area.\n";
    }
    else {
        cout << "\nRectangle 1 and Rectangle 2 do not have the same area.\n";
    }
}

