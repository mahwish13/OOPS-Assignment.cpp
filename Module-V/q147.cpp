// program147_integer_exception.cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int num;
        cout << "Enter a positive number: ";
        cin >> num;
        if (num < 0) throw num;
        cout << "You entered: " << num << endl;
    } catch (int e) {
        cout << "Exception: Negative number " << e << endl;
    }

    return 0;
}
