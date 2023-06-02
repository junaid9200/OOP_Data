#include <iostream>

using namespace std;

class Element {

	public:
		Element(int x)
		{
			setVal(x);
			cout<<"Element("<<x<<") constructed!\n";
		}
		int getVal(){
			return val;
		}
		void setVal(int val){
			this->val = val;
		} 

	private:
		int val;
};

class Collection {

	Element e1;
	Element e2;

	public:
		Collection(): e2(2), e1(1) 
		{
			cout<<"collection constructed!\n";
		}
		void setElement(int eNum, int val){
			if (eNum==1)
				e1.setVal(val);
			else
				e2.setVal(val);
		}
		int getElement(int eNum){
			if (eNum==1)
				return e1.getVal();
			else
				return e2.getVal();
		}
};

int main() {
	
	Element test(3);
	
 	Collection c;
	
	c.setElement(1,5);
	cout<<"Element e1: "<<c.getElement(1)<<endl;
}

