// program168_stack_exception.cpp
#include <iostream>
#include <stack>
#include <stdexcept>
using namespace std;

int main() {
    stack<int> s;
    try {
        if (s.empty()) throw runtime_error("Stack is empty!");
        s.pop();
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
