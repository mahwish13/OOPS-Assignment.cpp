// program150_catch_all.cpp
#include <iostream>
using namespace std;

int main() {
    try {
        throw 3.14;
    } catch (...) {
        cout << "Caught an exception of unknown type" << endl;
    }

    return 0;
}
