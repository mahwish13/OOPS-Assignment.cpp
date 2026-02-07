// program165_polymorphic_exception.cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void func() { throw "Base exception"; }
};

class Derived : public Base {
public:
    void func() { throw "Derived exception"; }
};

int main() {
    Base* b = new Derived();
    try {
        b->func();
    } catch (const char* e) {
        cout << "Caught: " << e << endl;
    }

    delete b;
    return 0;
}
