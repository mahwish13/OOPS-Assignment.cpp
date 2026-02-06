// program115_customer_billing.cpp
#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    double units;

public:
    Customer(string n, double u) {
        name = n;
        units = u;
    }

    double calculateBill() {
        return units * 15;
    }

    void display() {
        cout << "Customer: " << name << endl;
        cout << "Total Bill: " << calculateBill() << endl;
    }
};

int main() {
    Customer c("Usman", 120);
    c.display();

    return 0;
}
