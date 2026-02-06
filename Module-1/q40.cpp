// program40_structure_student.cpp
#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student s;
    
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cin.ignore();
    
    cout << "Enter name: ";
    cin.getline(s.name, 50);
    
    cout << "Enter marks: ";
    cin >> s.marks;
    
    cout << "\n Student Details \n";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    
    return 0;
}
