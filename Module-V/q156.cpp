// program156_nested_try.cpp
#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 10;
        } catch (int e) {
            cout << "Inner catch: " << e << endl;
            throw; // rethrow
        }
    } catch (...) {
        cout << "Outer catch: exception propagated" << endl;
    }

    return 0;
}
