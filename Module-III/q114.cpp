// program114_employee_payroll.cpp
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    double calculateAnnualSalary() {
        return salary * 12;
    }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Annual Salary: " << calculateAnnualSalary() << endl;
    }
};

int main() {
    Employee e("Sara", 50000);
    e.display();

    return 0;
}
