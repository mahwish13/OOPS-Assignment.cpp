// program159_exception_spec.cpp
#include <iostream>
using namespace std;

void func() throw(int) { // can only throw int
    throw 5;
}

int main() {
    try {
        func();
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    }

    return 0;
}
