// program126_write_file.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    if (file) {
        file << "Hello World!\n";
        file << "C++ file handling example.\n";
        file.close();
        cout << "Data written successfully." << endl;
    }

    return 0;
}
