// program84_hierarchical_inheritance.cpp
#include <iostream>
using namespace std;

class Shape {
protected:
    double dimension;
    
public:
    void setDimension(double d) {
        dimension = d;
    }
};

class Circle : public Shape {
public:
    double area() {
        return 3.14159 * dimension * dimension;
    }
};

class Square : public Shape {
public:
    double area() {
        return dimension * dimension;
    }
};

int main() {
    Circle c;
    c.setDimension(5);
    cout << "Circle area: " << c.area() << endl;
    
    Square s;
    s.setDimension(4);
    cout << "Square area: " << s.area() << endl;
    
    return 0;
}
