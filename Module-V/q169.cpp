// program169_bank_withdrawal.cpp
#include <iostream>
#include <stdexcept>
using namespace std;

class Account {
    double balance;
public:
    Account(double b) { balance = b; }
    void withdraw(double amount) {
        if (amount > balance) throw runtime_error("Insufficient funds!");
        balance -= amount;
    
    double getBalance() { return balance; }
};

int main() {
    Account acc(1000);
    try {
        acc.withdraw(1500);
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
