// program41_simple_class.cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
    
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    
    cout << "Enter length: ";
    cin >> rect.length;
    cout << "Enter width: ";
    cin >> rect.width;
    
    cout << "Area: " << rect.area() << endl;
    
    return 0;
}
