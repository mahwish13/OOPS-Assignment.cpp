// program160_exception_inheritance.cpp
#include <iostream>
#include <exception>
using namespace std;

class BaseException : public exception {
public:
    const char* what() const throw() { return "Base Exception"; }
};

class DerivedException : public BaseException {
public:
    const char* what() const throw() { return "Derived Exception"; }
};

int main() {
    try {
        throw DerivedException();
    } catch (BaseException &e) {
        cout << e.what() << endl;
    }

    return 0;
}
