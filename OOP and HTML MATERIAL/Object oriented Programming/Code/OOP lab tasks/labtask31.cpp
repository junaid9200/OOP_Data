#include<iostream>
#include<string.h>
using namespace std;

struct studentdata
{
	string name;
	int courses[4];     //structure members.

};
studentdata Enter_data(studentdata x , int y)     //function declaration with struct name.
{
	cout<<"Enter student name "<<y<<" = ";
	getline ( cin,x.name);
	for(int i=1;i<4;i++)
	{
		cout<<"Enter student marks for course : "<<i<<"="<<" ";
		cin>>x.courses[i];
	}

	cin.ignore(25,'\n');
	return x;    //returning function.
}
void Display_data(studentdata display,int y1)   //displaying output through function.
{
	cout<<"Enter student name  "<<y1 <<" = "<<display.name<<endl;
	cout<<"Enter student marks for course :1 = "<<display.courses[1]<<endl;
	cout<<"Enter student marks for course :2 = "<<display.courses[2]<<endl;
	cout<<"Enter student marks for course :3 = "<<display.courses[3]<<endl;
}
void Calc_Average_Marks(studentdata x)
{
		float marks=x.courses[1]+x.courses[2]+x.courses[3];
		float sum=marks;
		float avg=sum/3;
		cout<<"Average marks :"<<avg<<endl;
}
void Change_Marks(studentdata& y)
{
int course, marks;
    cout << "Enter the course no to change marks: ";
    cin >> course;
    cout << "Enter the updated marks: ";
    cin >> marks;
    y.courses[course] = marks; // fix the assignment statement
    cout << "Updated Successfully!" << endl;
}

int main()
{
	int y=1,y1=1;
    int option,number;
    cout<<"Welcome To My Programme :)"<<endl<<"------------------------------------------------------------------------------------------------------------------------";
    
	 studentdata data1,data2,movie1,movie2;   //declaring the structure variables.
	 
	  //storing data.
	 movie1=Enter_data(data1,y);  
	 cout<<endl;
	 movie2=Enter_data(data2,++y);
	 
	 cout<<endl;
	 
	 do {
	      cout<<endl;
	 cout<<"Menu:"<<endl<<"1. Display Student Data"<<endl<<"2. Calculate Average Marks"<<endl<<"3. Change Marks"<<endl<<"4. Exit"<<endl<<endl;
	 
	 cout<<"Please select an Option :";
	 cin>>option;
	if(option==4)
	 {
	 	break;
	 }
	 cout<<"Enter the student no:";
	 cin>>number;
	 cout<<endl;
	 
	 
	 if(option==1 && number==1)
	 {
	 	cout<<"Now displaying data of student 1 :"<<endl;
	 	  Display_data(movie1,y1);
	 }
	 else if(option==1 && number==2)
	 {
	 	cout<<"Now displaying data of student 2 :"<<endl;
	 	    Display_data(movie2,++y1);
	 }
	  else if(option==2 && number==1)
	 {
	 	cout<<"Now displaying Average Marks of student 1 :"<<endl;
	 	   Calc_Average_Marks(movie1);
	 }
	  else if(option==2 && number==2)
	 {
	 	cout<<"Now displaying Average Marks of student 2 :"<<endl;
	 	      Calc_Average_Marks(movie2);
	 }
	 else if(option==3 && number==1)
	 {
	 	Change_Marks(movie1);
	 }
	  else if(option==3 && number==2)
	 {
	 	Change_Marks(movie2);
	 }
	 }
	 while(option = 4);
}
