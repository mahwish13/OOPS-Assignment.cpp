// program42_private_public.cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    
public:
    void setBalance(double bal) {
        if (bal >= 0) {
            balance = bal;
        } else {
            cout << "Invalid balance!" << endl;
        }
    }
    
    double getBalance() {
        return balance;
    }
    
    void deposit(double amount) {
        balance += amount;
    }
    
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount acc;
    
    acc.setBalance(1000);
    cout << "Initial balance: " << acc.getBalance() << endl;
    
    acc.deposit(500);
    cout << "After deposit: " << acc.getBalance() << endl;
    
    acc.withdraw(300);
    cout << "After withdrawal: " << acc.getBalance() << endl;
    
    return 0;
}
