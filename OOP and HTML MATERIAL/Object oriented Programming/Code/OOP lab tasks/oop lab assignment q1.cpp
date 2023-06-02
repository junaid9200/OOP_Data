#include <iostream>
using namespace std;

class Rectangle2;  //declaration;
class Rectangle3;
class Rectangle4;
class Rectangle1 {
private:
    int length;
    int breadth;
    
public:
    Rectangle1(int len, int brdth) : length(len), breadth(brdth) {}
    
    friend void sum(Rectangle1&, Rectangle2& ,Rectangle3& ,Rectangle4&);
    
    void display() {
    	cout<<"\t       Length   Breadth"<<endl;
        cout << "Rectangle 1 :    " << length << "       " << breadth <<endl;
    }
};

class Rectangle2 {
private:
    int length;
    int breadth;
    
public:
    Rectangle2(int len, int brdth) : length(len), breadth(brdth) {}
    
    friend void sum(Rectangle1&,Rectangle2& ,Rectangle3& ,Rectangle4&);
    
    void display() {
       cout << "Rectangle 2 :    " << length << "       " << breadth <<endl;
    }
};

class Rectangle3 {
private:
    int length;
    int breadth;
    
public:
    Rectangle3(int len, int brdth) : length(len), breadth(brdth) {}
     friend void sum(Rectangle1&,Rectangle2& ,Rectangle3& ,Rectangle4&);
    
    void display() {
      cout << "Rectangle 3 :    " << length << "       " << breadth <<endl;
    }
};

class Rectangle4 {
private:
    int length;
    int breadth;
    
public:
    Rectangle4(int len, int brdth) : length(len), breadth(brdth) {}
     friend void sum(Rectangle1&,Rectangle2& ,Rectangle3& ,Rectangle4&);
    
    void display() {
        cout << "Rectangle 4 :    " << length << "       " << breadth <<endl;
    }
};

void sum(Rectangle1& r1,Rectangle2& r2,Rectangle3& r3,Rectangle4& r4) {
    int totalLength = r1.length + r2.length + r3.length +r4.length ;
    int totalBreadth = r1.breadth + r2.breadth +r3.breadth+r4.breadth;
    
    cout<<"-----------------------------------"<<endl;
	cout<<"\tSum :    "<<totalLength<<"\t"<<totalBreadth<<endl;
	cout<<"-----------------------------------"<<endl;
}

int main() {
    Rectangle1 r1(5, 10);
    Rectangle2 r2(7, 12);
    Rectangle3 r3(3, 6);
    Rectangle4 r4(8, 15);
    
    r1.display();
    r2.display();
    r3.display();
    r4.display();
    
    sum(r1, r2 ,r3,r4);
    
}


