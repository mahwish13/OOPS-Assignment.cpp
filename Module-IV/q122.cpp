// program122_getline.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "You entered: " << sentence << endl;

    return 0;
}
