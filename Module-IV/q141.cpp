// program141_delete_record.cpp
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    int searchRoll;
    cout << "Enter roll to delete: ";
    cin >> searchRoll;

    ifstream in("students.bin", ios::binary);
    ofstream out("temp.bin", ios::binary);

    Student s;
    while (in.read((char*)&s, sizeof(s))) {
        if (s.roll != searchRoll) {
            out.write((char*)&s, sizeof(s));
        }
    }

    in.close();
    out.close();

    remove("students.bin");
    rename("temp.bin", "students.bin");

    cout << "Record deleted if existed." << endl;
    return 0;
}
