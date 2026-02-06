// program68_compare_friend.cpp
#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    
public:
    Student(int m) : marks(m) {}
    
    friend int compareMarks(Student, Student);
};

int compareMarks(Student s1, Student s2) {
    if (s1.marks > s2.marks) {
        return 1;
    } else if (s1.marks < s2.marks) {
        return -1;
    }
    return 0;
}

int main() {
    Student s1(85);
    Student s2(92);
    
    int result = compareMarks(s1, s2);
    
    if (result == 1) {
        cout << "First student has higher marks" << endl;
    } else if (result == -1) {
        cout << "Second student has higher marks" << endl;
    } else {
        cout << "Both have equal marks" << endl;
    }
    
    return 0;
}
