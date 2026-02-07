// program166_override_exception.cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void f() throw(int) { throw 1; }
};

class Derived : public Base {
public:
    void f() throw() { cout << "No exception in derived\n"; }
};

int main() {
    Derived d;
    d.f();
    return 0;
}
