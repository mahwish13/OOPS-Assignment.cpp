// program134_read_eof.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("students.txt");
    Student s;

    while (file.read((char*)&s, sizeof(s))) {
        s.display();
    }

    file.close();
    return 0;
}
