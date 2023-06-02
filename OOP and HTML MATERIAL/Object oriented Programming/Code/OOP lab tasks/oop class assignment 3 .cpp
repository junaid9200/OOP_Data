#include <iostream>
#include <string>
using namespace std;

const int MAX_SECTIONS = 5;
const int MAX_STUDENTS_PER_SECTION = 50;
const int MAX_ADMINS = 5;

// Section class
class Section {
private:
    string sectionName;
    int numOfStudents;

public:
    Section() {
        sectionName = "";
        numOfStudents = 0;
    }

    Section(string name, int students) {
        sectionName = name;
        numOfStudents = students;
    }

    string getSectionName() {
        return sectionName;
    }

    int getNumOfStudents() {
        return numOfStudents;
    }
};

// Student class
class Student {
private:
    string rollNo;
    string name;
    string section;
    string password;

public:
    Student() {
        rollNo = "";
        name = "";
        section = "";
        password = "";
    }

    Student(string roll, string studentName, string sec, string pass) {
        rollNo = roll;
        name = studentName;
        section = sec;
        password = pass;
    }

    string getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    string getSection() {
        return section;
    }

    string getPassword() {
        return password;
    }

    void setPassword(string newPass) {
        password = newPass;
    }
};

// Admin class
class Admin {
private:
    string name;
    string password;

public:
    Admin() {
        name = "";
        password = "";
    }

    Admin(string adminName, string pass) {
        name = adminName;
        password = pass;
    }

    string getName() {
        return name;
    }

    string getPassword() {
        return password;
    }

    void setPassword(string newPass) {
        password = newPass;
    }
};

// Director class
class Director {
public:
    void increaseAdminCount(Admin admins[], int& adminCount) {
        if (adminCount < MAX_ADMINS) {
            string name, password;
            cout << "Enter new admin name: ";
            cin >> name;
            cout << "Enter new admin password: ";
            cin >> password;

            admins[adminCount] = Admin(name, password);
            adminCount++;
            cout << "New admin added successfully.\n";
        } else {
            cout << "Maximum admin limit reached.\n";
        }
    }

    void decreaseAdminCount(Admin admins[], int& adminCount) {
        if (adminCount > 1) {
            string name;
            cout << "Enter admin name to remove: ";
            cin >> name;

            for (int i = 0; i < adminCount; i++) {
                if (admins[i].getName() == name) {
                    for (int j = i; j < adminCount - 1; j++) {
                        admins[j] = admins[j + 1];
                    }
                    adminCount--;
                    cout << "Admin removed successfully.\n";
                    return;
                }
            }
            cout << "Admin not found.\n";
        } else {
            cout << "Cannot remove the only admin.\n";
        }
    }
};

int main() {
    // Creating an array to store sections
    Section sections[MAX_SECTIONS];
    int sectionCount = 0;

    // Creating an array to store students
    Student students[MAX_SECTIONS * MAX_STUDENTS_PER_SECTION];
    int studentCount = 0;

    // Creating an array to store admins
    Admin admins[MAX_ADMINS];
    int adminCount = 1; // Including the default admin

    // Initializing the default admin
    admins[0] = Admin("admin", "admin");

    Director director;

    while (true) {
        int option;
        cout<<endl;
       cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Welcome to Database Of Computer Science Department." << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><><><>";
    cout<<endl<<endl;
        cout << "\t\t\t\1Login as admin(1)\n";
        cout << "\t\t\t\1Login as student(2)\n";
        cout << "\t\t\t\1Director's options(3)\n";
        cout << "\t\t\t\1Exit(0)\n";
        cout<<endl;
        cout << "\t\tOption : ";
        cin >> option;

        if (option == 0) {
            break;
        }

        if (option == 1) {
        		 system("CLS");
        		 cout<<endl;
        		 	cout<<"\t\t\t__________________Admin______________________"<<endl;
        		 	cout<<endl;
            string adminName, adminPass;
            cout << "Admin Name (default): ";
            cin >> adminName;
            cout << "Password (default): ";
            cin >> adminPass;

            // Find the admin by name
            Admin* currentAdmin = nullptr;
            for (int i = 0; i < adminCount; i++) {
                if (admins[i].getName() == adminName) {
                    currentAdmin = &admins[i];
                    break;
                }
            }

            if (currentAdmin != nullptr) {
                if (currentAdmin->getPassword() == adminPass) {
                    // Change password on the first login
                    if (adminName == "admin" && adminPass == "admin") {
                        string newPass;
                        cout << "Set a new password: ";
                        cin >> newPass;
                        currentAdmin->setPassword(newPass);
                    }

                    // Admin actions
                    while (true) {
                        int adminAction;
                        cout << "\n\t\t\t\3Admin actions:\n";
                        cout<<endl;
                        cout<<"\t\t------------------------------------"<<endl;
                        cout << "\t\t\t\2Add new admin(1)\n";
                        cout << "\t\t\t\2Remove an admin(2)\n";
                        cout << "\t\t\t\2Add new section(3)\n";
                        cout << "\t\t\t\2Add new student(4)\n";
                        cout << "\t\t\t\2View section details(5)\n";
                        cout << "\t\t\t\2View student details(6)\n";
                        cout << "\t\t\t\2View admin details(7)\n";
                        cout << "\t\t\t\2Logout(0)\n";
                         cout<<"\t\t------------------------------------"<<endl;
                        cout<<endl;
                        cout << "\t\tAction: ";
                        cin >> adminAction;

                        if (adminAction == 0) {
                            break;
                        }

                        switch (adminAction) {
                            case 1:
                                director.increaseAdminCount(admins, adminCount);
                                break;
                            case 2:
                                director.decreaseAdminCount(admins, adminCount);
                                break;
                            case 3:
                                if (sectionCount < MAX_SECTIONS) {
                                    string secName;
                                    int numOfStudents;
                                    cout << "Enter section name: ";
                                    cin >> secName;
                                    cout << "Enter number of students: ";
                                    cin >> numOfStudents;

                                    sections[sectionCount] = Section(secName, numOfStudents);
                                    sectionCount++;
                                    cout << "Section added successfully.\n";
                                } else {
                                    cout << "Maximum section limit reached.\n";
                                }
                                break;
                            case 4:
                                if (studentCount < MAX_SECTIONS * MAX_STUDENTS_PER_SECTION) {
                                    string rollNo, name, section, password;
                                    cout << "Enter roll number: ";
                                    cin >> rollNo;
                                    cout << "Enter student name: ";
                                    cin >> name;
                                    cout << "Enter section: ";
                                    cin >> section;
                                    cout << "Enter password: ";
                                    cin >> password;

                                    students[studentCount] = Student(rollNo, name, section, password);
                                    studentCount++;
                                    cout << "Student added successfully.\n";
                                } else {
                                    cout << "Maximum student limit reached.\n";
                                }
                                break;
                            case 5:
                                cout << "Enter section index (starts from 0): ";
                                int secIndex;
                                cin >> secIndex;
                                if (secIndex >= 0 && secIndex < sectionCount) {
                                    cout << "Section Name: " << sections[secIndex].getSectionName() << "\n";
                                    cout << "Number of Students: " << sections[secIndex].getNumOfStudents() << "\n";
                                } else {
                                    cout << "Invalid section index.\n";
                                }
                                break;
                            case 6:
                                cout << "Enter student index (starts from 0): ";
                                int stdIndex;
                                cin >> stdIndex;
                                if (stdIndex >= 0 && stdIndex < studentCount) {
                                    cout << "Roll No: " << students[stdIndex].getRollNo() << "\n";
                                    cout << "Name: " << students[stdIndex].getName() << "\n";
                                    cout << "Section: " << students[stdIndex].getSection() << "\n";
                                    // Admins can view passwords as well
                                    cout << "Password: " << students[stdIndex].getPassword() << "\n";
                                } else {
                                    cout << "Invalid student index.\n";
                                }
                                break;
                            case 7:
                                cout << "Enter admin index (starts from 0): ";
                                int admIndex;
                                cin >> admIndex;
                                if (admIndex >= 0 && admIndex < adminCount) {
                                    cout << "Admin Name: " << admins[admIndex].getName() << "\n";
                                    // Admins can view passwords as well
                                    cout << "Password: " << admins[admIndex].getPassword() << "\n";
                                } else {
                                    cout << "Invalid admin index.\n";
                                }
                                break;
                            default:
                                cout << "Invalid admin action.\n";
                                break;
                        }
                    }
                } else {
                    cout << "Invalid password.\n";
                }
            } else {
                cout << "Admin not found.\n";
            }
        }

        if (option == 2) {
        		 system("CLS");
        		 cout<<endl;
        		 	cout<<"\t\t\t__________________Student______________________"<<endl;
        		 	cout<<endl;
            string rollNo, pass;
            cout << "Roll No: ";
            cin >> rollNo;
            cout << "Password: ";
            cin >> pass;

            // Find the student by roll number
            Student* currentStudent = nullptr;
            for (int i = 0; i < studentCount; i++) {
                if (students[i].getRollNo() == rollNo) {
                    currentStudent = &students[i];
                    break;
                }
            }

            if (currentStudent != nullptr) {
                if (currentStudent->getPassword() == pass) {
                    // Change roll number on the first login
                    if (pass == "student123") {
                        string newRollNo;
                        cout << "Set a new roll number: ";
                        cin >> newRollNo;
                        currentStudent->setPassword(newRollNo);
                    }

                    // Student actions
                    cout << "\nStudent details:\n";
                    cout << "Roll No: " << currentStudent->getRollNo() << "\n";
                    cout << "Name: " << currentStudent->getName() << "\n";
                    cout << "Section: " << currentStudent->getSection() << "\n";
                } else {
                    cout << "Invalid password.\n";
                }
            } else {
                cout << "Student not found.\n";
            }
        }

        if (option == 3) {
        		 system("CLS");
        		 cout<<endl;
        		 	cout<<"\t\t\t__________________Director______________________"<<endl;
        		 	cout<<endl;
            cout << "Director options:\n";
            cout << "1. Increase admin count\n";
            cout << "2. Decrease admin count\n";
            cout << "Option: ";
            int dirOption;
            cin >> dirOption;

            switch (dirOption) {
                case 1:
                    director.increaseAdminCount(admins, adminCount);
                    break;
                case 2:
                    director.decreaseAdminCount(admins, adminCount);
                    break;
                default:
                    cout << "Invalid director option.\n";
                    break;
            }
        }
    }

}

