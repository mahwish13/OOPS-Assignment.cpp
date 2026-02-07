// program164_multiple_catch.cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int x;
        cout << "Enter 0 or 1: ";
        cin >> x;
        if (x == 0) throw 0;
        else if (x == 1) throw 1.1;
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    } catch (double e) {
        cout << "Caught double: " << e << endl;
    }

    return 0;
}
