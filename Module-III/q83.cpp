// program83_multiple_inheritance.cpp
#include <iostream>
using namespace std;

class Father {
protected:
    string fatherName;
    
public:
    void setFatherName(string name) {
        fatherName = name;
    }
};

class Mother {
protected:
    string motherName;
    
public:
    void setMotherName(string name) {
        motherName = name;
    }
};

class Child : public Father, public Mother {
private:
    string childName;
    
public:
    void setChildName(string name) {
        childName = name;
    }
    
    void display() {
        cout << "Father: " << fatherName << endl;
        cout << "Mother: " << motherName << endl;
        cout << "Child: " << childName << endl;
    }
};

int main() {
    Child c;
    c.setFatherName("Robert");
    c.setMotherName("Sarah");
    c.setChildName("Alex");
    c.display();
    
    return 0;
}
