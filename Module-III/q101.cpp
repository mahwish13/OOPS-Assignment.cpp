// program101_late_binding.cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived display" << endl;
    }
};

int main() {
    Base* obj;
    Derived d;
    
    obj = &d;
    obj->display();   // Late binding
    
    return 0;
}
