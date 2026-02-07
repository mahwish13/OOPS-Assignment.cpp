// program140_update_record.cpp
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    int searchRoll;
    cout << "Enter roll number to update: ";
    cin >> searchRoll;

    fstream file("students.bin", ios::binary | ios::in | ios::out);
    Student s;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == searchRoll) {
            cout << "Enter new name: ";
            cin >> s.name;
            file.seekp(-sizeof(s), ios::cur);
            file.write((char*)&s, sizeof(s));
            cout << "Record updated." << endl;
            break;
        }
    }

    file.close();
    return 0;
}
