// program132_objects_file.cpp
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
    char name[20];

    void input() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.input();

    ofstream out("student.dat", ios::binary);
    out.write((char*)&s1, sizeof(s1));
    out.close();

    Student s2;
    ifstream in("student.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));
    in.close();

    s2.display();
    return 0;
}
