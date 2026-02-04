// program23_nested_if.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num >= 0) {
        if (num == 0) {
            cout << "The number is zero." << endl;
        } else {
            cout << "The number is positive." << endl;
        }
    } else {
        cout << "The number is negative." << endl;
    }
    
    return 0;
}
