// program146_try_catch.cpp
#include <iostream>
using namespace std;

int main() {
  try {
        int x = 10, y = 0;
        if (y == 0) throw "Division by zero!";
        cout << x / y << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
