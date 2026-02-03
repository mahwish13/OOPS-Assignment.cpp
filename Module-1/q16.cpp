// program16_increment_decrement.cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;
    
    cout << "Initial values: a = " << a << ", b = " << b << endl;
    
    cout << "\nPost-increment: a++ = " << a++ << endl;
    cout << "Value after post-increment: a = " << a << endl;
    
    cout << "\nPre-increment: ++a = " << ++a << endl;
    
    cout << "\nPost-decrement: b-- = " << b-- << endl;
    cout << "Value after post-decrement: b = " << b << endl;
    
    cout << "\nPre-decrement: --b = " << --b << endl;
    
    return 0;
}
