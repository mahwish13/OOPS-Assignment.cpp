// program157_constructor_exception.cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo(int x) {
        if (x < 0) throw "Negative value!";
        cout << "Demo object created\n";
    }
};

int main() {
    try {
        Demo d(-5);
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
