// program167_new_exception.cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int* arr = new int[1000000000];
        delete[] arr;
    } catch (bad_alloc &e) {
        cout << "Memory allocation failed: " << e.what() << endl;
    }

    return 0;
}
