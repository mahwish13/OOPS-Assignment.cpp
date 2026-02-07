// program161_exception_propagation.cpp
#include <iostream>
using namespace std;

void func2() { throw 10; }
void func1() { func2(); }

int main() {
    try {
        func1();
    } catch (int e) {
        cout << "Caught: " << e << endl;
    }

    return 0;
}
