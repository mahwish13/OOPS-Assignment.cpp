// program15_bitwise_operators.cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "\nBitwise Operations:\n";
    cout << a << " & " << b << " = " << (a & b) << " (AND)" << endl;
    cout << a << " | " << b << " = " << (a | b) << " (OR)" << endl;
    cout << a << " ^ " << b << " = " << (a ^ b) << " (XOR)" << endl;
    cout << "~" << a << " = " << (~a) << " (NOT)" << endl;
    cout << a << " << 1 = " << (a << 1) << " (Left Shift)" << endl;
    cout << a << " >> 1 = " << (a >> 1) << " (Right Shift)" << endl;
    
    return 0;
}
