// program57_constructor_order.cpp
#include <iostream>
using namespace std;

class First {
public:
    First() {
        cout << "First constructor called" << endl;
    }
};

class Second {
public:
    Second() {
        cout << "Second constructor called" << endl;
    }
};

class Third {
private:
    First f;
    Second s;
    
public:
    Third() {
        cout << "Third constructor called" << endl;
    }
};

int main() {
    Third t;
    
    return 0;
}
