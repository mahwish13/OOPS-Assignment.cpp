// program17_ternary_operator.cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    max = (a > b) ? a : b;
    
    cout << "Maximum of " << a << " and " << b << " is: " << max << endl;
    
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result << endl;
    
    return 0;
}
