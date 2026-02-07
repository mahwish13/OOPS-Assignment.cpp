// program130_append_file.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app);

    if (file.is_open()) {
        file << "Appending a new line.\n";
        cout << "Data appended successfully." << endl;
    }

    file.close();
    return 0;
}
