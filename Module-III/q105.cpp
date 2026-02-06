// program105_base_pointer.cpp
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle starting" << endl;
    }
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starting" << endl;
    }
};

int main() {
    Vehicle* v;
    Car c;
    
    v = &c;
    v->start();
    
    return 0;
}
