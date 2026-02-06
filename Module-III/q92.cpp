// program92_destructor_order.cpp
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor" << endl;
    }
    
    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived1 : public Base {
public:
    Derived1() {
        cout << "Derived1 constructor" << endl;
    }
    
    ~Derived1() {
        cout << "Derived1 destructor" << endl;
    }
};

class Derived2 : public Derived1 {
public:
    Derived2() {
        cout << "Derived2 constructor" << endl;
    }
    
    ~Derived2() {
        cout << "Derived2 destructor" << endl;
    }
};

int main() {
    cout << "Creating object:\n";
    Derived2 obj;
    cout << "\nDestroying object:\n";
    
    return 0;
}
