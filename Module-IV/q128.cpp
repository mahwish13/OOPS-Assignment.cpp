// program128_copy_file.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream source("data.txt");
    ofstream dest("copy.txt");
    string line;

    if (source.is_open() && dest.is_open()) {
        while (getline(source, line)) {
            dest << line << endl;
        }
        cout << "File copied successfully." << endl;
    }

    source.close();
    dest.close();

    return 0;
}
