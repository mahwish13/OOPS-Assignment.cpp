// program62_this_local_member.cpp
#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;
    
public:
    void setData(int id, double salary) {
        this->id = id;
        this->salary = salary;
    }
    
    void display() {
        cout << "Employee ID: " << this->id << endl;
        cout << "Salary: " << this->salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setData(101, 50000);
    emp.display();
    
    return 0;
}
