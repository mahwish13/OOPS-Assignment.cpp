// program59_const_initialization.cpp
#include <iostream>
using namespace std;

class ConstDemo {
private:
    const int value;
    
public:
    ConstDemo(int v) : value(v) {
        cout << "Constructor: const member initialized to " << value << endl;
    }
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    ConstDemo c1(100);
    c1.display();
    
    ConstDemo c2(200);
    c2.display();
    
    return 0;
}
