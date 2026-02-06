// program95_employee_payroll.cpp
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string name;
    
public:
    void inputEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
    
    void displayEmployeeData() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
    }
};

class Salary : public Employee {
protected:
    double basicSalary;
    double hra;
    double da;
    
public:
    void inputSalaryData() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
    }
};

class Payroll : public Salary {
private:
    double grossSalary;
    double tax;
    double netSalary;
    
public:
    void calculatePayroll() {
        grossSalary = basicSalary + hra + da;
        tax = grossSalary * 0.1;  // 10% tax
        netSalary = grossSalary - tax;
    }
    
    void displayPayroll() {
        displayEmployeeData();
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "HRA: $" << hra << endl;
        cout << "DA: $" << da << endl;
        cout << "Gross Salary: $" << grossSalary << endl;
        cout << "Tax (10%): $" << tax << endl;
        cout << "Net Salary: $" << netSalary << endl;
    }
};

int main() {
    Payroll p;
    p.inputEmployeeData();
    p.inputSalaryData();
    p.calculatePayroll();
    
    cout << "\n Payroll Details \n";
    p.displayPayroll();
    
    return 0;
}
