// program144_formatted_manip.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(10) << "Name" 
         << right << setw(5) << "Age" << endl;
    cout << left << setw(10) << "Ali" 
         << right << setw(5) << 25 << endl;
    cout << left << setw(10) << "Sara" 
         << right << setw(5) << 30 << endl;

    return 0;
}
