// program86_private_inheritance.cpp
#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;
    
protected:
    int protectedVar;
    
private:
    int privateVar;
    
public:
    void setValues(int pub, int prot, int priv) {
        publicVar = pub;
        protectedVar = prot;
        privateVar = priv;
    }
    
    void displayBase() {
        cout << "Base - Public: " << publicVar << ", Protected: " << protectedVar << endl;
    }
};

class Derived : private Base {
public:
    void setDerivedValues(int pub, int prot, int priv) {
        setValues(pub, prot, priv);
    }
    
    void displayDerived() {
        cout << "Derived accessing base members:\n";
        cout << "Public (now private): " << publicVar << endl;
        cout << "Protected (now private): " << protectedVar << endl;
        displayBase();
    }
};

int main() {
    Derived d;
    d.setDerivedValues(10, 20, 30);
    d.displayDerived();
    
    // d.publicVar = 100;  // ERROR: publicVar is private in Derived
    
    return 0;
}
