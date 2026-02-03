// program18_algebraic_expression.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x, result;
    
    cout << "Evaluate: ax^2 + bx + c\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Enter x: ";
    cin >> x;
    
    result = a * pow(x, 2) + b * x + c;
    
    cout << "\nResult = " << result << endl;
    
    return 0;
}
