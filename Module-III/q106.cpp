// program106_virtual_call.cpp
#include <iostream>
using namespace std;

class A {
public:
    virtual void func() {
        cout << "A::func()" << endl;
    }
};

class B : public A {
public:
    void func() {
        cout << "B::func()" << endl;
    }
};

int main() {
    A* obj = new B();
    obj->func();
    
    delete obj;
    return 0;
}
