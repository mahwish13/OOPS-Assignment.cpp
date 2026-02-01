// program12_relational_operators.cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "\nRelational Operations:\n";
    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " < " << b << " : " << (a < b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " <= " << b << " : " << (a <= b) << endl;
    
    return 0;
}


Program 13: Logical Operators

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


Program 14: Assignment Operators

// program14_assignment_operators.cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    
    cout << "Initial value: a = " << a << endl;
    
    a += 5;
    cout << "After a += 5: " << a << endl;
    
    a -= 3;
    cout << "After a -= 3: " << a << endl;
    
    a *= 2;
    cout << "After a *= 2: " << a << endl;
    
    a /= 4;
    cout << "After a /= 4: " << a << endl;
    
    a %= 3;
    cout << "After a %= 3: " << a << endl;
    
    return 0;
}
