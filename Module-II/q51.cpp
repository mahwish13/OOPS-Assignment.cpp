// program51_default_constructor.cpp
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    char name[50];
    
public:
    Student() {
        rollNo = 0;
        strcpy(name, "Unknown");
        cout << "Default constructor called" << endl;
    }
    
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.display();
    
    return 0;
}
