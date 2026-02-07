// program136_file_exists.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    if (file) {
        cout << "File exists." << endl;
    } else {
        cout << "File does not exist." << endl;
    }

    file.close();
    return 0;
}
