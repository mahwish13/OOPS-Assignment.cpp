// program109_static_dynamic.cpp
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show (static binding)" << endl;
    }
    
    virtual void display() {
        cout << "Base display (dynamic binding)" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show" << endl;
    }
    
    void display() {
        cout << "Derived display" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    
    b = &d;
    b->show();
    b->display();
    
    return 0;
}
