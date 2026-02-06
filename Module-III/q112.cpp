// program112_student_result.cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks[3];

public:
    Student(string n, int m1, int m2, int m3) {
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void displayResult() {
        int total = marks[0] + marks[1] + marks[2];
        double avg = total / 3.0;

        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Student s("Ahmed", 85, 78, 90);
    s.displayResult();

    return 0;
}
