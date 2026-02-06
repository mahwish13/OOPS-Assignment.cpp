// program81_single_inheritance.cpp
#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    
public:
    void setName(string n) {
        name = n;
    }
    
    void eat() {
        cout << name << " is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << name << " is barking" << endl;
    }
};

int main() {
    Dog dog;
    dog.setName("Buddy");
    dog.eat();
    dog.bark();
    
    return 0;
}
