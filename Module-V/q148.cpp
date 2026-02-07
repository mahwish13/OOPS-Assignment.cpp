// program148_string_exception.cpp
#include <iostream>
using namespace std;

int main() {
    try {
        throw "This is a string exception!";
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }

    return 0;
}
