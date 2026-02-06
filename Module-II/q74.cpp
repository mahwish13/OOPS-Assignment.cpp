// program74_const_member_function.cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
    
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    
    int area() const {
        return length * width;
    }
    
    int perimeter() const {
        return 2 * (length + width);
    }
    
    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

int main() {
    const Rectangle rect(10, 5);
    rect.display();
   
    return 0;
}
