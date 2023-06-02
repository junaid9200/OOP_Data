/* structure nested array */

#include <iostream>

using namespace std;

struct Point {
    int x[2];
};

struct Line {
    Point p[2];
};

struct triangle{
    Line l[3];	
};

int main() {
    //Line l[3] = {     {{{2, 0}, {6, 5}}}    ,    {{{6, 5}, {8, 3}}},     {{{8, 3}, {2, 0}}}      };
    triangle t= { {     {{{2, 0}, {6, 5}}}    ,    {{{6, 5}, {8, 3}}},     {{{8, 3}, {2, 0}}}      } };	
    //int x = myLine.points[0].coords[0];
    //int y = myLine.points[0].coords[1];

    cout<<"\ntriangle line 1  : {("<<t.l[0].p[0].x[0]<<", "<<t.l[0].p[0].x[1]<<"), ("<<t.l[0].p[1].x[0]<<", "<<t.l[0].p[1].x[1]<<")}"<<endl;
    cout<<"\ntriangle line 2 : {("<<t.l[1].p[0].x[0]<<", "<<t.l[1].p[0].x[1]<<"), ("<<t.l[1].p[1].x[0]<<", "<<t.l[1].p[1].x[1]<<")}"<<endl;
    cout<<"\ntrianglel ine 3 : {("<<t.l[2].p[0].x[0]<<", "<<t.l[2].p[0].x[1]<<"), ("<<t.l[2].p[1].x[0]<<", "<<t.l[2].p[1].x[1]<<")}"<<endl;		
return 0;
}