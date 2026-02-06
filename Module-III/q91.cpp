// program91_constructor_order.cpp
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }
};

class Derived1 : public Base {
public:
    Derived1() {
        cout << "Derived1 constructor called" << endl;
    }
};

class Derived2 : public Derived1 {
public:
    Derived2() {
        cout << "Derived2 constructor called" << endl;
    }
};

int main() {
    cout << "Creating Derived2 object:\n";
    Derived2 obj;
    
    return 0;
}
