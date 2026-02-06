// program48_area_class.cpp
#include <iostream>
using namespace std;

class Shape {
private:
    double dimension1, dimension2;
    
public:
    void setDimensions(double d1, double d2 = 0) {
        dimension1 = d1;
        dimension2 = d2;
    }
    
    double circleArea() {
        return 3.14159 * dimension1 * dimension1;
    }
    
    double rectangleArea() {
        return dimension1 * dimension2;
    }
    
    double triangleArea() {
        return 0.5 * dimension1 * dimension2;
    }
};

int main() {
    Shape s;
    double radius, length, width, base, height;
    
    cout << "Enter radius for circle: ";
    cin >> radius;
    s.setDimensions(radius);
    cout << "Circle area: " << s.circleArea() << endl;
    
    cout << "\nEnter length and width for rectangle: ";
    cin >> length >> width;
    s.setDimensions(length, width);
    cout << "Rectangle area: " << s.rectangleArea() << endl;
    
    cout << "\nEnter base and height for triangle: ";
    cin >> base >> height;
    s.setDimensions(base, height);
    cout << "Triangle area: " << s.triangleArea() << endl;
    
    return 0;
}
