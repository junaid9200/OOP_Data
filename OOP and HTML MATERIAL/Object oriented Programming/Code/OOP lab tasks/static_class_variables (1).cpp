#include <iostream>

using namespace std;

class Student {
	public:
		static int std_count;
	
		Student(){
			std_count++;
		}
		~Student(){
			std_count--;
		}
};

int Student::std_count=0;

int main() {
	cout<<"total students: "<<Student::std_count<<endl;
	Student * x = new Student;
	cout<<"total students: "<<Student::std_count<<endl;
	Student ali, mahad, zain;
	cout<<"total students: "<<Student::std_count<<endl;
	delete x;
	cout<<"total students: "<<Student::std_count<<endl;
	
}

