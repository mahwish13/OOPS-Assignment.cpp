// program102_virtual_destructor.cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base* b = new Derived();
    delete b;   // Proper cleanup due to virtual destructor
    
    return 0;
}
