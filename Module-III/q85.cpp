// program85_hybrid_inheritance.cpp
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
    
public:
    void setRollNo(int r) {
        rollNo = r;
    }
};

class Test : public Student {
protected:
    int marks1, marks2;
    
public:
    void setMarks(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }
};

class Sports {
protected:
    int sportsScore;
    
public:
    void setSportsScore(int s) {
        sportsScore = s;
    }
};

class Result : public Test, public Sports {
public:
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total: " << (marks1 + marks2 + sportsScore) << endl;
    }
};

int main() {
    Result r;
    r.setRollNo(101);
    r.setMarks(85, 90);
    r.setSportsScore(75);
    r.display();
    
    return 0;
}
