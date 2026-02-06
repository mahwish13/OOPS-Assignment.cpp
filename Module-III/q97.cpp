// program97_operator_overloading.cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
    
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c1 + c2 = "; c3.display();
    cout << "c1 - c2 = "; c4.display();
    
    return 0;
}
