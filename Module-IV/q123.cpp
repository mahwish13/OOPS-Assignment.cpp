// program123_get_put.cpp
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    ch = cin.get();

    cout << "You entered: ";
    cout.put(ch);
    cout << endl;

    return 0;
}
