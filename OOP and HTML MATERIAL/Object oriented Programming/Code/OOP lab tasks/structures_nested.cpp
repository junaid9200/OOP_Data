/* Nested Structure */

#include <iostream>
using namespace std;

struct point{ 
	double x, y;
};
point P;

struct line{
	point p1, p2;
};
line L;

struct triangle{ 
	point p1, p2, p3;
};
triangle T

int main(){

	P.x = 4;
	P.y = 11;
	L.p1.x = 2;
	L.p1.y = 7;
	L.p2.x = 10;
	L.p2.y = 9;
	T.p1.x = 2;
	T.p1.y = 0;
	T.p2.x = 6;
	T.p2.y = 5;
	T.p3.x = 8;
	T.p3.y = 3;
	
}