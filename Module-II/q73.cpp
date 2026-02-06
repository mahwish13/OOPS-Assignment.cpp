// program73_constant_object.cpp
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    
public:
    Circle(double r) : radius(r) {}
    
    double getRadius() const {
        return radius;
    }
    
    double area() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    const Circle c(5.0);
    
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.area() << endl;
    
    return 0;
}
