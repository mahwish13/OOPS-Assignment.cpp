// program163_input_validation.cpp
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int age;
        cout << "Enter age: ";
        cin >> age;
        if (age < 0) throw invalid_argument("Age cannot be negative!");
        cout << "You entered: " << age << endl;
    } catch (invalid_argument &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
