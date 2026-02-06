// program54_copy_constructor.cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
    
public:
    Point(int x1 = 0, int y1 = 0) {
        x = x1;
        y = y1;
        cout << "Normal constructor called" << endl;
    }
    
    Point(const Point &p) {
        x = p.x;
        y = p.y;
        cout << "Copy constructor called" << endl;
    }
    
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 20);
    p1.display();
    
    Point p2 = p1;  // Copy constructor called
    p2.display();
    
    Point p3(p1);   // Copy constructor called
    p3.display();
    
    return 0;
}
