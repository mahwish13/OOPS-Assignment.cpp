// program71_static_data_member.cpp
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    static int totalStudents;
    
public:
    Student(int r) {
        rollNo = r;
        totalStudents++;
    }
    
    void display() {
        cout << "Roll No: " << rollNo << ", Total Students: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1(101);
    s1.display();
    
    Student s2(102);
    s2.display();
    
    Student s3(103);
    s3.display();
    
    return 0;
}
