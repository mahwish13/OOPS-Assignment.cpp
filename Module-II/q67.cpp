// program67_complex_friend.cpp
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
    
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    
    friend Complex addComplex(Complex, Complex);
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);
    
    cout << "First complex number: ";
    c1.display();
    
    cout << "Second complex number: ";
    c2.display();
    
    Complex c3 = addComplex(c1, c2);
    cout << "Sum: ";
    c3.display();
    
    return 0;
}
