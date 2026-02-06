// program90_resolve_ambiguity.cpp
#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Base1 show()" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 show()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "Calling Base1::show(): ";
        Base1::show();
        
        cout << "Calling Base2::show(): ";
        Base2::show();
        
        cout << "Derived show()" << endl;
    }
};

int main() {
    Derived d;
    d.show();
    
    return 0;
}
