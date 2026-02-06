// program38_copy_string.cpp
#include <iostream>
using namespace std;

int main() {
    char source[100], destination[100];
    int i = 0;
    
    cout << "Enter a string: ";
    cin.getline(source, 100);
    
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    
    cout << "Source string: " << source << endl;
    cout << "Destination string: " << destination << endl;
    
    return 0;
}
