// program61_this_pointer.cpp
#include <iostream>
using namespace std;

class ThisDemo {
private:
    int value;
    
public:
    void setValue(int value) {
        this->value = value;  // Distinguish between parameter and member
    }
    
    void display() {
        cout << "Value: " << this->value << endl;
        cout << "Address of object: " << this << endl;
    }
    
    ThisDemo* getObject() {
        return this;
    }
};

int main() {
    ThisDemo obj;
    obj.setValue(42);
    obj.display();
    
    cout << "Returned object address: " << obj.getObject() << endl;
    
    return 0;
}
