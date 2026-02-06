// program55_constructor_overloading.cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
    
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    
    Complex(double r) {
        real = r;
        imag = 0;
    }
    
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    Complex c2(5.5);
    Complex c3(3.2, 4.8);
    
    cout << "c1: "; c1.display();
    cout << "c2: "; c2.display();
    cout << "c3: "; c3.display();
    
    return 0;
}
