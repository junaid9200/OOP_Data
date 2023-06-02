//database for a Computer Science department.
#include <iostream>
#include<string.h>
using namespace std;
// Structure for Student .
struct Student {
 int rollNo;
 string name;
 string section;
 string password;
 int noofstudents[250];
};
// Structure for Section .
struct Section {
 string section_name;
 int noofsections[5];
};
// Structure for Admin .
struct Admin {
 string name;
 string designation;
 string password;
};
// functions declarations.
void addAdmin(Admin admins[], int& numAdmins);
void updateAdmin(Admin admins[], int numAdmins);
void viewAdmins(Admin admins[], int numAdmins);
Admin takingname(Admin x);
void changepassword(Admin& y) ;
Student takingname(Student x);
void changepass(Student& y);
void displaystudentdata(Student display);
void viewStudents(Student students[], int numStudents);
void updateStudent(Student students[], int numStudents);
void addStudent(Student students[], int& numStudents);
int main()
{
 Admin a,b,c,d; //struct Admin variables.
 Student e,f,g,h; //struct Student variables.
 Admin admins[5]; // array to hold up to 10 admins
 int numAdmins = 0; // current number of admins
 Student students[250];
 int numStudents = 0;
 int option,option1,option2,option3,choice,choice1; //simple declarations for scanning.
do{
 cout<<"Welcome to the Department of Computer Science"<<endl<<"--------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
 cout<<"Press 1 to login as Admin."<<endl<<"Press 2 to login as Student."<<endl;
 cout<<endl;
 cout<<"Enter your option: ";
 cin>>option;
 
 //means login as Admin.
 if(option==1) 
{
 c = takingname(a); //calling function of making Admin data. and storing it in new struct variable.
 cout<<endl;
 changepassword(c); //calling function of changing password of Admin and sending argument c in wich Admin data is save.
 cout<<endl;
 cout<<"Press 1 to add/update/view admins."<<endl<<"Press 2 to add/update/view students."<<endl<<"Press 3 To Go To Main Menue ."<<endl<<"Press 0 to logout."<<endl;
 cout<<endl;
 cout<<"Your option : ";
 cin>>option1;
 if(option1==1) // AS upper if 1 so there is (Press 1 to add/update/view admins) for that it is used to take it seprately.
 {
 cout<<endl;
 do {
 cout << "1. Add admin" << endl;
 cout << "2. Update admin" << endl;
 cout << "3. View admins" << endl;
 cout << "4. Exit" << endl;
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 addAdmin(admins, numAdmins); // function call to add admin.
 char check;
 do{
 cout<<"Do You Want To Add Another Admin (Y/N):";
 cin>>check;
 if(check == 'y'||check=='Y')
 {
 addAdmin(admins, numAdmins);
}
else if(check=='n'||check=='N')
{
break;
}
}
while (check!='y'||check!='Y');
 break;
 case 2:
 updateAdmin(admins, numAdmins); //function call to update Admin .
 break;
 case 3:
 viewAdmins(admins, numAdmins); //function call to view admin.
 break;
 case 4:
 cout << "Exiting..." << endl;
 break;
 default:
 cout << "Invalid choice." << endl;
 break;
 }
 } 
while (choice != 4);
 }
 
 else if(option1==2)
 {
 
 do {
 cout<<endl;
 cout << "Select an option:" << endl;
 cout << "1. Add student" << endl;
 cout << "2. Update student" << endl;
 cout << "3. View all students" << endl;
 cout << "4. Exit" << endl;
 cout << "Enter your choice: ";
 cin >> choice1;
 switch (choice1) {
 case 1:
 addStudent(students, numStudents); //function call to add student .
 char check1;
 do{
 cout<<"Do You Want To Add Another Admin (Y/N):";
 cin>>check1;
 if(check1 == 'y'||check1 =='Y')
 {
 addStudent(students, numStudents) ;
}
else if(check1=='n'||check1=='N')
{
break;
}
}
while (check1!='y'||check1!='Y');
break;
 case 2:
 updateStudent(students, numStudents); //function call to update student .
 break;
 case 3:
 viewStudents(students, numStudents); //function call to view student .
 break;
 case 4:
 cout << "Goodbye!" << endl;
 break;
 default:
 cout << "Invalid choice. Please try again." << endl;
 break;
 if(option1==0)
 {
 break;
 
 }
 }
 } while (choice != 4);
}
 
}
//means login as Student(condition).
 else if(option==2)
 {
 g = takingname(e);//calling function of making Student data. and storing it in new struct variable.
 cout<<endl;
 changepass(g);//calling function of changing password of Student and sending argument g in wich Student data is save.
 cout<<endl;
 do{
 cout<<endl;
 cout<<"Press 1 to see your information."<<endl<<"Press 2 To Go To Main Menue ."<<endl<<"Press 0 to logout."<<endl;
 cout<<endl;
 cout<<"Your option : ";
 cin>>option2;//taking option to see information or to logout.
 if(option2 == 1)//here option 1 is for seeing the information of student by himself.
 {
 displaystudentdata(g);//calling function to display data of the student.
}
else if(option2 == 0)//here option 2 is for logout.
{
break;
}
 
 }
while(option2 == 1);//while condition.
}
}
while(option1 == 3 || option2 == 2);
}
// Function to add admin data
void addAdmin(Admin admins[], int& numAdmins) {
 if (numAdmins < 6) { // limit to 5 admins
 Admin admin;
 string pass,pass1;
 cout << "Enter admin name: ";
 cin >> admin.name;
 cout<<"enter your designation (faculty, staff):";
 cin>>admin.designation;
 cout<<"Enter your default password : ";
 cin>>pass;
 do{
 if(pass!="admin123")
 {
 cout<<"Wrong password ! try again :";
 cin>>pass;
}
}
while(pass != "admin123");
cout<<"Change your password :";
cin>>pass1;
 cout << "Re-enter password: ";
 cin >> admin.password;
 do{
 if(pass1!= admin.password)
 {
 cout<<"Wrong password ! try again :";
 cin>>admin.password;
}}
while(pass1!= admin.password);
 admins[numAdmins++] = admin;
 cout << "Admin added successfully!" << endl;
 } else {
 cout << "Maximum number of admins reached." << endl;
 }
}
// Function to update admin data
void updateAdmin(Admin admins[], int numAdmins) {
 string name;
 cout << "Enter admin name to update: ";
 cin >> name;
 for (int i = 0; i < numAdmins; i++) {
 if (admins[i].name == name) {
 cout << "Enter new admin name: ";
 cin >> admins[i].name;
 cout<<"enter your designation (faculty, staff):";
 cin>>admins[i]. designation;
 cout << "Enter new admin password: ";
 cin >> admins[i].password;
 cout << "Admin updated successfully!" << endl;
 return;
 }
 }
 cout << "Admin not found." << endl;
}
// Function to view admin data
void viewAdmins(Admin admins[], int numAdmins) {
 if (numAdmins == 0) {
 cout << "No admins found." << endl;
 } else {
 cout << "Admins:" << endl;
 for (int i = 0; i < numAdmins; i++) {
 cout << "Name: " << admins[i].name << endl;
 cout<<"designation (faculty, staff) : "<<admins[i].designation<<endl;
 cout << "Password: " << admins[i].password << endl;
 cout << endl;
 }
 }
}
//Making Admin Data Through function.
Admin takingname(Admin x)
{
 string password="admin";
 cout<<"Enter your default user_name: ";
 cin.ignore(25,'\n');
 getline(cin,x.name);
 cout<<"designation (faculty, staff) :";
 cin>>x.designation;
 cout<<"Enter your default Password :";
 cin>>x.password;
 do{
 if(password != x.password)
 {
 cout<<"Please input the correct password"<<endl;
 cout<<"password : ";
 cin>>x.password;
 }}
 while(password != x.password);
 //x.noofadmins[0] = 1;
 return x; //returning function. whenever we return a function in structure we take the data type of the structure name.
}
//Now Changing Password for Admin after first login.
void changepassword(Admin& y) //here & is used to take adress of admin.
{
 string pass1, pass2;
 string password="admin";
 cout<<"---------------"<<endl;
 cout<<" WELCOME :)"<<endl;
 cout<<"---------------"<<endl;
 cout<<endl;
 cout<<"You must change your password"<<endl;
 cout<<endl;
 cout<<"New password: ";
 cin>>pass1;
 cout<<"Confirm new password: ";
 cin>>pass2;
 do{
 if(pass1!=pass2)
 {
 cout<<endl;
 cout<<"error! Please enter again"<<endl;
 cout<<endl;
 cout<<"Confirm new password: ";
 cin>>pass2;
 }
}
 while(pass1!=pass2);
 
 y.password=pass2;
 cout<<"Your password has been changed."<<endl;
}
////Making Student Data Through function.
Student takingname(Student x)
{
 string password="student123";
 cout<<"rollNo : ";
 cin>>x.rollNo;
 cout<<"Passward :";
 cin>>x.password;
 do{
if(password != x.password)
 {
 cout<<"Please input the correct password"<<endl;
 cout<<"password : ";
 cin>>x.password;
 }}
 while(password != x.password);
 // x.noofadmins[0] = 1;
 return x; //returning function.
}
////Now Changing Password for student after first login.
void changepass(Student& y)
{
 string pass1, pass2;
 cout<<"name :";
 cin>>y.name;
 cout<<"section (A,B,C,D):";
 cin>>y.section;
 cout<<endl;
 cout<<"---------------"<<endl;
 cout<<" WELCOME :)"<<endl;
 cout<<"---------------"<<endl;
 cout<<endl;
 cout<<"You must change your password"<<endl;
 cout<<endl;
 cout<<"New password: ";
 cin>>pass1;
 cout<<"Confirm new password: ";
 cin>>pass2;
 do{
 if(pass1!=pass2)
 {
 cout<<"error! Please enter again"<<endl;
 cout<<"Confirm new password: ";
 cin>>pass2;
 }}
 while(pass1!=pass2);
 y.password=pass2;
 cout<<"Your password has been changed."<<endl;
}
//Displaying the student data.
void displaystudentdata(Student display)
{
cout<<endl;
cout<<"Now displaying data of the student "<<endl;
cout<<endl;
cout<<"name :"<<display.name<<endl;
cout<<"roll number :"<<display.rollNo<<endl;
cout<<"section :"<<display.section<<endl;
}
void addStudent(Student students[], int& numStudents) {
 cout << "Enter name: ";
 cin >> students[numStudents].name;
 cout << "Enter rollno: ";
 cin >> students[numStudents].rollNo;
 cout << "Enter section: ";
 cin >> students[numStudents].section[5];
 for(int i=0;i<5;i++)
 {
 if(students[numStudents].section[i]>50)
 {
 cout<<"Limit Exceeded Add In Another Section"<<endl;
}}
 cout << "Enter Password: ";
 cin >> students[numStudents].password;
 numStudents++;
 cout << "Student added successfully!" << endl;
}
void updateStudent(Student students[], int numStudents) {
 int id;
 bool found = false;
 cout << "Enter the rollnumber of the student to update: ";
 cin >> id ;
 for (int i = 0; i < numStudents; i++) {
 if (students[i].rollNo == id )
{
 cout << "Enter new name: ";
 cin >> students[i].name;
 cout << "Enter new rollnumber: ";
 cin >> students[i].rollNo;
 cout << "Enter new password: ";
 cin >> students[i].password;
 found = true;
 cout << "Student updated successfully!" << endl;
 break;
 }
 }
 if (!found) {
 cout << "Student not found." << endl;
 }
}
void viewStudents(Student students[], int numStudents) {
 for (int i = 0; i < numStudents; i++) {
 cout << "Name: " << students[i].name << endl;
 cout << "Roll number: " << students[i].rollNo << endl;
 cout << "Section: " << students[i].section[5]<< endl;
 cout << "password: " << students[i].password << endl;
 cout << endl;
 }
}

