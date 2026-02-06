// program45_arithmetic_class.cpp
#include <iostream>
using namespace std;

class Arithmetic {
private:
    int num1, num2;
    
public:
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }
    
    void performOperations() {
        cout << "Addition: " << (num1 + num2) << endl;
        cout << "Subtraction: " << (num1 - num2) << endl;
        cout << "Multiplication: " << (num1 * num2) << endl;
        cout << "Division: " << (double)num1 / num2 << endl;
    }
};

int main() {
    Arithmetic arith;
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    arith.setNumbers(a, b);
    arith.performOperations();
    
    return 0;
}
