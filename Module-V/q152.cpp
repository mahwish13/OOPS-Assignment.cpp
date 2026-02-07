// program152_rethrow.cpp
#include <iostream>
using namespace std;

void func() {
    try {
        throw "Error in func!";
    } catch (...) {
        cout << "Caught in func, rethrowing..." << endl;
        throw;
    }
}

int main() {
    try {
        func();
    } catch (const char* msg) {
        cout << "Caught in main: " << msg << endl;
    }

    return 0;
}
