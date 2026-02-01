// program13_logical_operators.cpp
#include <iostream>
using namespace std;

int main() {
    bool a, b;
    
    cout << "Enter first boolean (0/1): ";
    cin >> a;
    cout << "Enter second boolean (0/1): ";
    cin >> b;
    
    cout << "\nLogical Operations:\n";
    cout << a << " && " << b << " = " << (a && b) << endl;
    cout << a << " || " << b << " = " << (a || b) << endl;
    cout << "!" << a << " = " << (!a) << endl;
    cout << "!" << b << " = " << (!b) << endl;
    
    return 0;
}
