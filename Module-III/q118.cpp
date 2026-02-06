// program118_aggregation.cpp
#include <iostream>
using namespace std;

class Address {
public:
    string city;

    Address(string c) {
        city = c;
    }
};

class Person {
private:
    Address* address;

public:
    Person(Address* addr) {
        address = addr;
    }

    void display() {
        cout << "City: " << address->city << endl;
    }
};

int main() {
    Address a("Islamabad");
    Person p(&a);
    p.display();

    return 0;
}
