// program125_file_creation.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");

    if (file.is_open()) {
        file << "This is a new file.\n";
        file.close();
        cout << "File created successfully." << endl;
    } else {
        cout << "Error creating file." << endl;
    }

    return 0;
}
