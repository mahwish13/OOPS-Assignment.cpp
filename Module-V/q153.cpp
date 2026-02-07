// program153_user_defined_exception.cpp
#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const throw() {
        return "Custom Exception Occurred!";
    }
};

int main() {
    try {
        throw MyException();
    } catch (exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
