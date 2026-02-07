// program138_struct_binary.cpp
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    Student s1 = {101, "Ali"};

    ofstream out("students.bin", ios::binary);
    out.write((char*)&s1, sizeof(s1));
    out.close();

    Student s2;
    ifstream in("students.bin", ios::binary);
    in.read((char*)&s2, sizeof(s2));
    in.close();

    cout << "Roll: " << s2.roll << ", Name: " << s2.name << endl;
    return 0;
}
