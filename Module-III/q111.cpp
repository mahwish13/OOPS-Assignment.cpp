// program111_bank_account.cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNo;
    double balance;

public:
    BankAccount(string n, int acc, double bal) {
        name = n;
        accountNo = acc;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Ali", 12345, 5000);
    acc.deposit(2000);
    acc.withdraw(1000);
    acc.display();

    return 0;
}
