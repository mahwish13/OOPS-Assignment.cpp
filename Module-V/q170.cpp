// program170_login_system.cpp
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void login(string user, string pass) {
    if (user != "admin" || pass != "1234")
        throw runtime_error("Invalid username or password!");
    cout << "Login successful!" << endl;
}

int main() {
    string u, p;
    cout << "Username: "; cin >> u;
    cout << "Password: "; cin >> p;

    try {
        login(u, p);
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
