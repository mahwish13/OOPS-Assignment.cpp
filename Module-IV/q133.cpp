// program133_store_student.cpp
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];

    void input() {
        cout << "Roll: ";
        cin >> roll;
        cout << "Name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    ofstream file("students.txt", ios::app);
    Student s;
    s.input();

    file.write((char*)&s, sizeof(s));
    file.close();

    cout << "Student data stored successfully." << endl;
    return 0;
}
