// program25_switch_statement.cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "Menu:\n";
    cout << "1. Coffee\n";
    cout << "2. Tea\n";
    cout << "3. Juice\n";
    cout << "4. Water\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "You ordered Coffee." << endl;
            break;
        case 2:
            cout << "You ordered Tea." << endl;
            break;
        case 3:
            cout << "You ordered Juice." << endl;
            break;
        case 4:
            cout << "You ordered Water." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
