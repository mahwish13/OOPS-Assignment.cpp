// program89_ambiguity.cpp
#include <iostream>
using namespace std;

class ClassA {
public:
    void display() {
        cout << "Display from ClassA" << endl;
    }
};

class ClassB {
public:
    void display() {
        cout << "Display from ClassB" << endl;
    }
};

class ClassC : public ClassA, public ClassB {
public:
    // Ambiguity: which display() to inherit?
};

int main() {
    ClassC obj;
    
    // obj.display();  // ERROR: ambiguous
    
    // Resolution using scope resolution
    obj.ClassA::display();
    obj.ClassB::display();
    
    return 0;
}
