// program142_merge_files.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file1("file1.txt"), file2("file2.txt");
    ofstream merged("merged.txt");
    string line;

    while (getline(file1, line)) merged << line << endl;
    while (getline(file2, line)) merged << line << endl;

    cout << "Files merged successfully." << endl;

    file1.close();
    file2.close();
    merged.close();
    return 0;
}
