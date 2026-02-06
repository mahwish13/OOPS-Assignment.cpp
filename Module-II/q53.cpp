// program53_multiple_constructors.cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
    
public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor" << endl;
    }
    
    Rectangle(int side) {
        length = width = side;
        cout << "Single parameter constructor" << endl;
    }
    
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Two parameter constructor" << endl;
    }
    
    int area() {
        return length * width;
    }
    
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.display();
    
    Rectangle r2(5);
    r2.display();
    
    Rectangle r3(4, 6);
    r3.display();
    
    return 0;
}
