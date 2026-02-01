// program6_simple_interest.cpp
#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, interest;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period (years): ";
    cin >> time;
    
    interest = (principal * rate * time) / 100;
    
    cout << "\nSimple Interest = " << interest << endl;
    cout << "Total Amount = " << (principal + interest) << endl;
    
    return 0;
}
