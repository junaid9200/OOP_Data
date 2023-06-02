#include <iostream>

using namespace std;

class Student {

	private:
		static int std_count;
		int rollNo=0;
		string name="N/A";
		char section='-';
	public:
		Student(int rollNo=0, string name="N/A", char section='-'){
			this->rollNo = rollNo;
			this->name = name;
			this->section = section;
			std_count++;
		}

		~Student(){
			cout<<"Good bye!\n";
			std_count--;
		}
		
		void setRollNo(int x){
			rollNo = x;
		}

		void setName(string y){
			name = y;
		}

		void setSection(char z){
			section = z;
		}

		void setStd_count(int std_count){
			this->std_count = std_count;
		}
		
		int getRollNo(){
			return  rollNo;
		}

		string getName(){
			return  name;
		}

		char getSection(){
			return section;
		}

		int getStd_count(){
			return std_count;
		}

		void display(){
			cout<<"roll no: "<<getRollNo()<<endl;
			cout<<"name: "<<getName()<<endl;
			cout<<"section: "<<getSection()<<endl;
			cout<<"total students: "<<getStd_count()<<endl;
		}
		
};

int Student::std_count=0;

int main() {
 	 
	Student ali;
	cout<<"std_count: "<<ali.getStd_count()<<endl;
	Student zain, 
	return 0;
}

