// program149_multiple_exceptions.cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 for int exception, 2 for string exception: ";
        cin >> choice;
        if (choice == 1) throw 100;
        else if (choice == 2) throw "String exception";
    } catch (int i) {
        cout << "Caught int: " << i << endl;
    } catch (const char* s) {
        cout << "Caught string: " << s << endl;
    }

    return 0;
}
