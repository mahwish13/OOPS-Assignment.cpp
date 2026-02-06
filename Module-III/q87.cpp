// program87_protected_inheritance.cpp
#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;
    
protected:
    int protectedVar;
    
public:
    void setValues(int pub, int prot) {
        publicVar = pub;
        protectedVar = prot;
    }
};

class Derived : protected Base {
public:
    void setDerivedValues(int pub, int prot) {
        setValues(pub, prot);
    }
    
    void display() {
        cout << "Public (now protected): " << publicVar << endl;
        cout << "Protected (still protected): " << protectedVar << endl;
    }
};

class FurtherDerived : public Derived {
public:
    void displayFurther() {
        cout << "Accessing from FurtherDerived:\n";
        cout << "Public: " << publicVar << endl;
        cout << "Protected: " << protectedVar << endl;
    }
};

int main() {
    Derived d;
    d.setDerivedValues(100, 200);
    d.display();
    
    FurtherDerived fd;
    fd.setDerivedValues(300, 400);
    fd.displayFurther();
    
    return 0;
}
