// program94_student_marks.cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
    
public:
    void inputStudentData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
    
    void displayStudentData() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks : public Student {
protected:
    int marks1, marks2, marks3;
    
public:
    void inputMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }
    
    void displayMarks() {
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
    }
};

class Result : public Marks {
private:
    int total;
    float percentage;
    
public:
    void calculateResult() {
        total = marks1 + marks2 + marks3;
        percentage = (total / 3.0);
    }
    
    void displayResult() {
        displayStudentData();
        displayMarks();
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        
        if (percentage >= 60) {
            cout << "Grade: First Division" << endl;
        } else if (percentage >= 50) {
            cout << "Grade: Second Division" << endl;
        } else if (percentage >= 40) {
            cout << "Grade: Third Division" << endl;
        } else {
            cout << "Grade: Fail" << endl;
        }
    }
};

int main() {
    Result r;
    r.inputStudentData();
    r.inputMarks();
    r.calculateResult();
    
    cout << "\n Result \n";
    r.displayResult();
    
    return 0;
}
