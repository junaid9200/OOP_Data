#include<iostream>
#include<math.h>
using namespace std;
double distance_calculate(double x1,double y1,double x2,double y2)
{
	double x=(x2-x1);
	x=x*x;
	double y=(y2-y1);
	y=y*y;
	double distance=x+y;
	distance=sqrt(distance);
	return distance;
	
}
int main()
{
	double x1,x2,y1,y2;
	cout<<"Enter coordinates x1 and y1 =";
	cin>>x1>>y1;
	cout<<"Enter coordinates x2 and y2 =";
	cin>>x2>>y2;
   double total_distance=distance_calculate(x1,y1,x2,y2);
	cout<<"total distance is :"<<total_distance<<endl;
}

