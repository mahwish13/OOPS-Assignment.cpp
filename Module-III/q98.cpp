// program98_runtime_polymorphism.cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "This is Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class show function" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    
    b = &d;
    b->show();   // Runtime polymorphism
    
    return 0;
}
