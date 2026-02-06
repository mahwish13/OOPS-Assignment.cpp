// program30_goto_statement.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    
    start:
    cout << "Enter a positive number: ";
    cin >> num;
    
    if (num <= 0) {
        cout << "Invalid input!\n";
        goto start;
    }
    
    cout << "You entered: " << num << endl;
    
    return 0;
}
