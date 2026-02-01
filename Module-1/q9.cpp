// program9_area_calculations.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, base, height, length, width;
    
    // Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    double circleArea = PI * radius * radius;
    cout << "Area of circle = " << circleArea << endl;
    
    // Triangle
    cout << "\nEnter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    double triangleArea = 0.5 * base * height;
    cout << "Area of triangle = " << triangleArea << endl;
    
    // Rectangle
    cout << "\nEnter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    double rectangleArea = length * width;
    cout << "Area of rectangle = " << rectangleArea << endl;
    
    return 0;
}
