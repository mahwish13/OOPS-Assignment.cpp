// program10_type_casting.cpp
#include <iostream>
using namespace std;

int main() {
    int intNum = 10;
    double doubleNum = 5.5;
    char ch = 'A';
    
    cout << "Original values:\n";
    cout << "intNum = " << intNum << endl;
    cout << "doubleNum = " << doubleNum << endl;
    cout << "ch = " << ch << endl;
    
    // Implicit casting
    double result1 = intNum + doubleNum;
    cout << "\nImplicit casting (int + double): " << result1 << endl;
    
    // Explicit casting
    int result2 = (int)doubleNum;
    cout << "Explicit casting (double to int): " << result2 << endl;
    
    int asciiValue = (int)ch;
    cout << "Char to int: " << asciiValue << endl;
    
    char numToChar = (char)(65);
    cout << "Int to char: " << numToChar << endl;
    
    return 0;
}
