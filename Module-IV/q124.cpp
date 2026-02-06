// program124_formatted_output.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265;

    cout << "Default precision: " << pi << endl;
    cout << "Set precision(4): " << setprecision(4) << pi << endl;
    cout << setw(10) << pi << endl;  // Width 10

    return 0;
}
