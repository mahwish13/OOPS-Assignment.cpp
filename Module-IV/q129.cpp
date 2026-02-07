// program129_count_words.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");
    string word;
    int count = 0;

    while (file >> word) {
        count++;
    }

    cout << "Number of words in file: " << count << endl;
    file.close();

    return 0;
}
