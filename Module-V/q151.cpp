// program151_stack_unwinding.cpp
#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Constructor called\n"; }
    ~Test() { cout << "Destructor called\n"; }
};

int main() {
    try {
        Test t1;
        throw 5;
    } catch (int e) {
        cout << "Exception caught: " << e << endl;
    }
    return 0;
}
