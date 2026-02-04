// program27_while_loop_table.cpp
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Multiplication table of " << num << ":\n";
    
    while (i <= 10) {
        cout << num << " x " << i << " = " << (num * i) << endl;
        i++;
    }
    
    return 0;
}
