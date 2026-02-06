// program44_employee_class.cpp
#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    int empId;
    char name[50];
    double salary;
    
public:
    void readData() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        
        cout << "Enter Name: ";
        cin.getline(name, 50);
        
        cout << "Enter Salary: ";
        cin >> salary;
    }
    
    void displayData() {
        cout << "\n Employee Details \n";
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    
    emp.readData();
    emp.displayData();
    
    return 0;
}
