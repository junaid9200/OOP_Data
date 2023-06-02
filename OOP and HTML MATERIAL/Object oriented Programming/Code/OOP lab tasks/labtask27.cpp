#include <iostream>
#include <string>
using namespace std;

// structure to store a student data
struct Student{
    string name;
    int id;
    float gpa;
};

// Declaring a function to make a new student
Student* createStudent(string name, int id, float gpa);

// Declaring a function to print a student's info
void printStudent(Student* student);

// Defining a static variable to keep track of the total number of students
static int numStudents = 0;

int main() {
    // Creating some students
    Student* ahmed = createStudent("ahmed", 123, 4);
    Student* junaid = createStudent("junaid", 456, 3.5);
    Student* noman = createStudent("noman", 789, 3.7);

    // Printing the student information using function with pointer 
    printStudent(ahmed);
    printStudent(junaid);
    printStudent(noman);

    // Deleting students to free memory
    delete ahmed;
    ahmed = nullptr;
    delete junaid;
    junaid = nullptr;
    delete noman;
    noman = nullptr;

    return 0;
}

// Implementation of createStudent function
Student* createStudent(string name, int id, float gpa) {
    // Allocate memory for a new student
    Student* student = new Student;

    // Set the student's properties
    student->name = name;
    student->id = id;
    student->gpa = gpa;

    // Increment the total number of students
    numStudents++;

    // Return a pointer to the new student
    return student;
}

// Implementation of printStudent function
void printStudent(Student* student) {
    cout << "Name Of Student: " << student->name << endl;
    cout << "ID Of Student: " << student->id << endl;
    cout << "GPA Of Student: " << student->gpa << endl;
}
