// program145_stream_hierarchy.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "ostream -> cout" << endl;
    cout << "istream -> cin" << endl;
    cout << "fstream -> file operations" << endl;

    ofstream file("demo.txt");
    file << "Demonstrating fstream hierarchy.\n";
    file.close();

    return 0;
}
