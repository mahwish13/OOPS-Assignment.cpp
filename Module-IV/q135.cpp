// program135_stringstream.cpp
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string data = "123 45.6 John";
    stringstream ss(data);

    int id;
    double score;
    string name;

    ss >> id >> score >> name;

    cout << "ID: " << id << ", Score: " << score << ", Name: " << name << endl;
    return 0;
}
