// program131_file_modes.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;

    // Open in append mode
    file.open("data.txt", ios::app);
    file << "Another appended line.\n";
    file.close();

    // Open in out mode (overwrite)
    file.open("overwrite.txt", ios::out);
    file << "This will overwrite if file exists.\n";
    file.close();

    cout << "File operations completed." << endl;
    return 0;
}
