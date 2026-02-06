// program108_polymorphic_array.cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing square" << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Square();
    
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }
    
    delete shapes[0];
    delete shapes[1];
    
    return 0;
}
