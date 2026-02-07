// program139_search_record.cpp
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
    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    ifstream file("students.bin", ios::binary);
    Student s;
    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == searchRoll) {
            cout << "Found: " << s.name << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << "Record not found." << endl;
    file.close();
    return 0;
}
