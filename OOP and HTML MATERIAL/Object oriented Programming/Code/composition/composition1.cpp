#include <iostream>

using namespace std;

class Element {
	int val;
	public:
		int getVal(){
			return val;
		}
		void setVal(int val){
			this->val = val;
		} 
};

class Collection {
	Element e1, e2;
	public:
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
 	Collection c;
	for (int i = 1; i<=2; i++)
		c.setElement(i, i+1);
	for (int i=1; i<=2; i++)
		cout<<"Element # "<<i<<" = "<<c.getElement(i)<<endl;
}

