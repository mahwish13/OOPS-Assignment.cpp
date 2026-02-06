// program79_information_hiding.cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;
    string pin;
    
    bool verifyPin(string inputPin) {
        return (pin == inputPin);
    }
    
public:
    BankAccount(string accNum, string holder, string p) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = 0;
        pin = p;
    }
    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }
    
    void withdraw(double amount, string inputPin) {
        if (!verifyPin(inputPin)) {
            cout << "Invalid PIN!" << endl;
            return;
        }
        
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return;
        }
        
        balance -= amount;
        cout << "Withdrawn: $" << amount << endl;
    }
    
    void checkBalance(string inputPin) {
        if (!verifyPin(inputPin)) {
            cout << "Invalid PIN!" << endl;
            return;
        }
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("123456789", "John Doe", "1234");
    
    acc.deposit(1000);
    acc.checkBalance("1234");
    acc.withdraw(500, "1234");
    acc.checkBalance("1234");
    acc.withdraw(200, "9999");  // Wrong PIN
    
    return 0;
}
