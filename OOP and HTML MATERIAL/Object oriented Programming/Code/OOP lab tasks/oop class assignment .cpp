#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure for student data
struct Student {
    int rollNo;
    string name;
    string section;
    string password;
};

// Structure for section data
struct Section {
    string section_name;
    int no_of_students;
    vector<Student> students;
};

// Structure for admin data
struct Admin {
    string name;
    string designation;
    string password;
};

// Function to create a new admin
Admin createAdmin() {
    Admin admin;
    cout << "Enter name: ";
    cin >> admin.name;
    cout << "Enter designation: ";
    cin >> admin.designation;
    admin.password = "admin123";
    return admin;
}

// Function to create a new student
Student createStudent() {
    Student student;
    cout << "Enter roll number: ";
    cin >> student.rollNo;
    cout << "Enter name: ";
    cin >> student.name;
    cout << "Enter section (A, B, C, D, E): ";
    cin >> student.section;
    student.password = "student123";
    return student;
}

// Function to change password
void changePassword(string& password) {
    string current_password, new_password;
    cout << "Enter current password: ";
    cin >> current_password;
    if (current_password != password) {
        cout << "Incorrect password." << endl;
        return;
    }
    cout << "Enter new password: ";
    cin >> new_password;
    password = new_password;
    cout << "Password changed successfully." << endl;
}

// Function to display student details
void displayStudent(Student student) {
    cout << "Roll number: " << student.rollNo << endl;
    cout << "Name: " << student.name << endl;
    cout << "Section: " << student.section << endl;
}

// Function to display section details
void displaySection(Section section) {
    cout << "Section name: " << section.section_name << endl;
    cout << "Number of students: " << section.no_of_students << endl;
    cout << "Student details:" << endl;
    for (int i = 0; i < section.no_of_students; i++) {
        displayStudent(section.students[i]);
    }
}

int main() {
    // Create sections
    Section sections[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter section " << char('A' + i) << " name: ";
        cin >> sections[i].section_name;
        sections[i].no_of_students = 0;
    }

    // Create admin accounts
    vector<Admin> admins;
    admins.push_back({ "admin", "faculty", "admin" });

    // Create student accounts
    vector<Student> students;
    students.push_back({ 1, "John Doe", "A", "student123" });

    int choice, admin_choice, student_choice, section_choice, admin_index, student_index;
    bool admin_logged_in = false, student_logged_in = false;
    string admin_name, admin_password, student_password;
    while (true) {
        // Display main menu
        cout << endl << "---------------------" << endl;
        cout << "MENU:" << endl;
        cout << "1. Login as admin" << endl;
        cout << "2. Login as student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            // Admin login
            cout << "Enter admin name: ";
            cin >> admin_name;
            cout << "Enter password: ";
            cin >> admin_password;

            // Check if admin account exists
            for (int i = 0; i < admins.size(); i++) {
                if (admins[i].name == admin_name && admins[i].password == admin_password) {
                    admin_logged_in = true;
                    admin_index = i;
                    break;
                }
            }

            if (admin_logged_in) {
                // Admin actions menu
                cout << endl << "---------------------" << endl;
                cout << "ADMIN ACTIONS MENU:" << endl;
                cout << "1. Create student account" << endl;
                cout << "2. Change student password" << endl;
                cout << "3. Change admin password" << endl;
                cout << "4. Logout" << endl;
                cout << "Enter choice: ";
                cin >> admin_choice;

                if (admin_choice == 1) {
                    // Create student account
                    students.push_back(createStudent());
                    cout << "Student account created successfully." << endl;
                }
                else if (admin_choice == 2) {
                    // Change student password
                    if (students.empty()) {
                        cout << "No student accounts exist." << endl;
                    }
                    else {
                        cout << "Enter student roll number: ";
                        cin >> student_choice;

                        // Check if student account exists
                        for (int i = 0; i < students.size(); i++) {
                            if (students[i].rollNo == student_choice) {
                                student_logged_in = true;
                                student_index = i;
                                break;
                            }
                        }

                        if (student_logged_in) {
                            changePassword(students[student_index].password);
                            student_logged_in = false;
                        }
                        else {
                            cout << "Student account not found." << endl;
                        }
                    }
                }
                 if (admin_choice == 3) {
                    // Change admin password
                    changePassword(admins[admin_index].password);
                }
                else if (admin_choice == 4) {
                    // Logout admin
                    admin_logged_in = false;}
                           }
            }
            else {
                cout << "Invalid credentials. Please try again." << endl;
            }
        }
         if (choice == 2) {
            // Student login
            cout << "Enter student roll number: ";
            cin >> student_choice;
            cout << "Enter password: ";
            cin >> student_password;

            // Check if student account exists
            for (int i = 0; i < students.size(); i++) {
                if (students[i].rollNo == student_choice && students[i].password == student_password) {
                    student_logged_in = true;
                    student_index = i;
                    break;
                }
            }

            if (student_logged_in) {
                // Student actions menu
                cout << endl << "---------------------" << endl;
                cout << "STUDENT ACTIONS MENU:" << endl;
                cout << "1. View profile" << endl;
                cout << "2. Logout" << endl;
                cout << "Enter choice: ";
                cin >> student_choice;

                if (student_choice == 1) {
                    // View profile
                    displayStudent(students[student_index]);
                }

                student_logged_in = false;
            }
            else {
                cout << "Invalid credentials. Please try again." << endl;
            }
        }
        else if (choice == 3) {
            // Exit program
            
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

               

