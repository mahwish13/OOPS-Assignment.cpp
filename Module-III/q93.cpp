// program93_virtual_base_class.cpp
#include <iostream>
using namespace std;

class Base {
protected:
    int value;
    
public:
    Base() {
        value = 10;
        cout << "Base constructor" << endl;
    }
    
    void showValue() {
        cout << "Value: " << value << endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1() {
        cout << "Derived1 constructor" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2() {
        cout << "Derived2 constructor" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final() {
        cout << "Final constructor" << endl;
    }
};

int main() {
    Final f;
    f.showValue();  // No ambiguity with virtual base class
    
    return 0;
}
