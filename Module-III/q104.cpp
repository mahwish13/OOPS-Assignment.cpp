// program104_dynamic_dispatch.cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base print" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived print" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->print();
    
    delete b;
    return 0;
}
