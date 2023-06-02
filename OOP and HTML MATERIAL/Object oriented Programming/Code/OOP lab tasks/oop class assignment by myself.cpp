//database for a Computer Science department.

#include <iostream>
#include<string.h>
using namespace std;

// Structure for Student .
struct Student {
    string rollNo;
    string name;
    string section;
    string password;
    int noofstudents[250];
};

// Structure for Section .
struct Section {
    string section_name;
    int no_of_students;
    int noofsections[5];
};

// Structure for Admin .
struct Admin {
    string name;
    string designation;
    string password;
};

// structure for list of admins .
struct AdminList {
    Admin admins[5];
    int numAdmins;
};





void addAdmin(AdminList& adminList, Admin newAdmin);
void display(AdminList adminList);
Admin takingname(Admin x);
void changepassword(Admin& y) ;
Student takingname(Student x);
void changepass(Student& y);
void displaystudentdata(Student display);




int main()
{
    Admin a,b,c,d;        //struct Admin variables.
    Student e,f,g,h;          //struct Student variables.
    int option,option1,option2,option3;             //simple declarations for scanning.
    cout<<"Welcome to the Department of Computer Science"<<endl<<"--------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"Press 1 to login as Admin."<<endl<<"Press 2 to login as Student."<<endl;
    cout<<endl;
    cout<<"Enter your option: ";
    cin>>option;
    
    
    if(option==1) //means login as Admin (condition).
    {
        c = takingname(a); //calling function of making Admin data. and storing it in new struct variable.
         cout<<endl;
        changepassword(c); //calling function of changing password of Admin and sending argument c in wich Admin data is save.
         cout<<endl;
    cout<<"Press 1 to add/update/view admins."<<endl<<"Press 2 to add/update/view students."<<endl<<"Press 0 to logout."<<endl;
    cout<<endl;
    cout<<"Your option : ";
    cin>>option1;
    if(option1==1) // AS upper if 1 so there is (Press 1 to add/update/view admins) for that it is used to take it seprately.
    {
    	cout<<endl;
    	do{
		cout<<"1. Add "<<endl<<"2. View admin"<<endl<<"3. Exit "<<endl;
    	cout<<endl;
    	cout<<"Your Option :";
    	cin>>option3;//Now here we will take option (e.g) if user enter 1 it will add Admin and so on till 3.
    	if(option3==1)
    	{
    	}
		else if(option3==3)
		{
			break;
		
	}}
	while(option==1);
}
    else if(option==2)//means login as Student(condition).
    {
    	 g = takingname(e);//calling function of making  Student data. and storing it in new struct variable.
         cout<<endl;
        changepass(g);//calling function of changing password of Student and sending argument g in wich Student data is save.
        cout<<endl;
       do{
       	cout<<endl;
	    cout<<"Press 1 to see your information."<<endl<<"Press 0 to logout."<<endl;
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






// Function to add a new admin to the list
void addAdmin(AdminList& adminList) {
	 Admin initialAdmin = {"admin", "password"};

    // Create an AdminList structure and add the initial admin
    AdminList adminList;
    adminList.admins[0] = initialAdmin;
    adminList.numAdmins = 1;

    // Allow the initial admin to add more admins
    while (adminList.numAdmins < 5) {
        string username, password;
        cout << "Enter username for new admin: ";
        cin >> username;
        cout<<"Enter the default passward :";
        cin>> pass;
        if(pass!=adi)
        cout << "Enter password for new admin: ";
        cin >> password;

        // Create a new admin and add it to the list
        Admin newAdmin = {username, password};
        addAdmin(adminList, newAdmin);

        // Ask if the initial admin wants to add another admin
        char addAnother;
        cout << "Do you want to add another admin? (Y/N): ";
        cin >> addAnother;
        if (addAnother == 'N' || addAnother == 'n') {
            break;
        }
    }
		}
    // Check if the maximum number of admins has already been reached
    if (adminList.numAdmins >= 5) {
        cout << "Maximum number of admins reached." << endl;
        return;
    }

    // Add the new admin to the list
    adminList.admins[adminList.numAdmins] = newAdmin;
    adminList.numAdmins++;
}
void display(AdminList adminList) {
	cout<<endl;
    cout << "List of admins:" << endl;
    cout<<endl;
    for (int i = 0; i < adminList.numAdmins; i++) {
        cout << adminList.admins[i].name << endl;
        cout<<endl;
    }
}
//Making Admin Data Through function.
Admin takingname(Admin x)
{
    string password="admin";
    cout<<"user name: ";
    cin.ignore(25,'\n');
    getline(cin,x.name);
    cout<<"designation (faculty, staff) :";
    cin>>x.designation;
    cout<<"Password :";
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
    return x;     //returning function. whenever we return a function in structure we take the data type of the structure name.
}

//Now Changing Password for Amin after first login.
void changepassword(Admin& y)   //here & is used to take adress of admin.
{
    string pass1, pass2;
     cout<<"---------------"<<endl;
    cout<<"  WELCOME :)"<<endl;
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
    }}
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
    x.noofadmins[0] = 1;
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
    cout<<"  WELCOME :)"<<endl;
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

