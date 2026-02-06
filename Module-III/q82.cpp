// program82_multilevel_inheritance.cpp
#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    
public:
    void setBrand(string b) {
        brand = b;
    }
};

class Car : public Vehicle {
protected:
    int doors;
    
public:
    void setDoors(int d) {
        doors = d;
    }
};

class SportsCar : public Car {
private:
    int topSpeed;
    
public:
    void setTopSpeed(int speed) {
        topSpeed = speed;
    }
    
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Doors: " << doors << endl;
        cout << "Top Speed: " << topSpeed << " mph" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.setBrand("Ferrari");
    sc.setDoors(2);
    sc.setTopSpeed(211);
    sc.display();
    
    return 0;
}
