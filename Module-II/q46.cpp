// program46_compare_objects.cpp
#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    void setValue(int v) {
        value = v;
    }
    
    int getValue() {
        return value;
    }
    
    bool isGreater(Number n) {
        return value > n.value;
    }
    
    bool isEqual(Number n) {
        return value == n.value;
    }
};

int main() {
    Number n1, n2;
    int val1, val2;
    
    cout << "Enter first number: ";
    cin >> val1;
    n1.setValue(val1);
    
    cout << "Enter second number: ";
    cin >> val2;
    n2.setValue(val2);
    
    if (n1.isEqual(n2)) {
        cout << "Numbers are equal." << endl;
    } else if (n1.isGreater(n2)) {
        cout << "First number is greater." << endl;
    } else {
        cout << "Second number is greater." << endl;
    }
    
    return 0;
}
