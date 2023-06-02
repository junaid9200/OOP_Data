#include<iostream>
using namespace std;

class Employee {
private:
  int id;
  string name;
  string jobTitle;
  int hoursWorkedPerWeek;
  double hourlyRate;

public:
  Employee(int id, string name, string jobTitle, int hoursWorkedPerWeek,
           double hourlyRate) {
    this->id = id;
    this->name = name;
    this->jobTitle = jobTitle;
    this->hoursWorkedPerWeek = hoursWorkedPerWeek;
    this->hourlyRate = hourlyRate;
  }
  int getId() { 
           return this->id; 
  }
  string getName() { 
          return this->name; 
  }
  string getJobTitle() { 
          return this->jobTitle; 
  }
  int getHoursWorkedPerWeek() { 
       return this->hoursWorkedPerWeek;
   }
  double getHourlyRate() {
      return this->hourlyRate;
    }
    
  void setId(int id) {
       this->id = id; 
   }
  void setName(string name) {
        this->name = name; 
   }
  void setJobTitle(string jobTitle) { 
         this->jobTitle = jobTitle; 
  }
  void setHoursWorkedPerWeek(int hoursWorkedPerWeek) {
    this->hoursWorkedPerWeek = hoursWorkedPerWeek;
  }
  void setHourlyRate(double hourlyRate) { 
         this->hourlyRate = hourlyRate; 
  }
  double calcSalary() {
    double basePay = hoursWorkedPerWeek * hourlyRate;
    if (hoursWorkedPerWeek > 40) {
      double extraHours = hoursWorkedPerWeek - 40;
      double overtimePay = extraHours * (2 * hourlyRate);
      return basePay + overtimePay;
    }
    return basePay;
  }
};

int main() {
  int numEmployees;
  cout << "Enter the number of employees: ";
  cin >> numEmployees;
  Employee *employees[numEmployees];
  for (int i = 0; i < numEmployees; i++) {
    int id;
    string name;
    string jobTitle;
    int hoursWorkedPerWeek;
    double hourlyRate;
    cout << "Enter id of employee " << (i + 1) << ": ";
    cin >> id;
    cout << "Enter name of employee " << (i + 1) << ": ";
    cin >> name;
    cout << "Enter job title of employee " << (i + 1) << ": ";
    cin >> jobTitle;
    cout << "Enter hours worked per week of employee " << (i + 1) << ": ";
    cin >> hoursWorkedPerWeek;
    cout << "Enter hourly rate of employee " << (i + 1) << ": ";
    cin >> hourlyRate;
    employees[i] =
        new Employee(id, name, jobTitle, hoursWorkedPerWeek, hourlyRate);
  }
  cout << "Name and Salary of Employees:" << endl;
  for (int i = 0; i < numEmployees; i++) {
    cout << employees[i]->getName() << ": $" << employees[i]->calcSalary()
         << endl;
  }
}
