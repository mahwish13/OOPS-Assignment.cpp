// program162_safe_file.cpp
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        ifstream file("nonexistent.txt");
        if (!file) throw runtime_error("File not found!");
        cout << "File opened." << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
