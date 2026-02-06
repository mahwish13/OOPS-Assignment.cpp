// program65_friend_class.cpp
#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;
    
public:
    Engine(int hp) : horsepower(hp) {}
    
    friend class Car;
};

class Car {
private:
    string model;
    
public:
    Car(string m) : model(m) {}
    
    void displayEngineDetails(Engine e) {
        cout << "Car Model: " << model << endl;
        cout << "Engine Horsepower: " << e.horsepower << endl;
    }
};

int main() {
    Engine eng(250);
    Car car("Tesla Model S");
    
    car.displayEngineDetails(eng);
    
    return 0;
}
