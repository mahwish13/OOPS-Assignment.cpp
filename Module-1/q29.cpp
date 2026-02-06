// program29_break_continue.cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Demonstrating break:\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        cout << i << " ";
    }
    cout << "\n\nDemonstrating continue:\n";
    
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
