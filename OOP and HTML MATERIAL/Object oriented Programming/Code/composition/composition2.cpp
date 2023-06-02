#include <iostream>

using namespace std;

class Element {
	int val;
public:
	Element(){cout<<"Element constructed!\n";}
	int getVal(){return val;}
	void setVal(int val){this->val = val;} 
	~Element(){
		cout<<"Element destructed!\n";
	}
};

class Collection {
	Element e1, e2;
public:
	Collection(){cout<<"collection constructed!\n";}
	~Collection(){cout<<"collection destructed!\n";}
	void setElement(int eNum, int val){
		if (eNum==1)
			e1.setVal(val);
		else
			e2.setVal(val);}
	int getElement(int eNum){
		if (eNum==1)
			return e1.getVal();
		else
			return e2.getVal();}
};

int main() {
 	Collection c;
}

