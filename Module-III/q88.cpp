// program88_access_base_members.cpp
#include <iostream>
using namespace std;

class Base {
protected:
    int baseValue;
    
public:
    Base(int v) : baseValue(v) {
        cout << "Base constructor called" << endl;
    }
    
    void displayBase() {
        cout << "Base value: " << baseValue << endl;
    }
};

class Derived : public Base {
private:
    int derivedValue;
    
public:
    Derived(int b, int d) : Base(b), derivedValue(d) {
        cout << "Derived constructor called" << endl;
    }
    
    void displayDerived() {
        cout << "Base value: " << baseValue << endl;
        cout << "Derived value: " << derivedValue << endl;
    }
    
    void modifyBaseValue(int v) {
        baseValue = v;
    }
};

int main() {
    Derived d(10, 20);
    d.displayDerived();
    d.displayBase();
    
    d.modifyBaseValue(100);
    d.displayDerived();
    
    return 0;
}
