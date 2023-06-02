/* structure nested 1 */

#include <iostream>
using namespace std;

struct point{ 
	int x, y;
};

struct line{
	point p1, p2;
};
struct triangle{ 
	point p1, p2, p3;
};

int main(){
	point P = {4,11};
	//P.x = 4;
	line L = {{2,7}, {10,9}} ;
	//L.p1.x = 2;
	triangle T = {{2,0},{6,5},{8,3}};
	//T.p1.x = 2;

	cout<<"\npoint : ("<<P.x<<", "<<P.y<<")"<<endl;
	cout<<"\nline : {("<<L.p1.x<<", "<<L.p1.y<<"), ("<<L.p2.x<<", "<<L.p2.y<<")}"<<endl;
	cout<<"\ntraingle : {("<<T.p1.x<<", "<<T.p1.y<<"), ("<<T.p2.x<<", "<<T.p2.y<<"),("<<T.p3.x<<", "<<T.p3.y<<")}\n"<<endl;
}



