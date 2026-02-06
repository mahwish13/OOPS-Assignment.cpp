// program58_dynamic_constructor.cpp
#include <iostream>
#include <cstring>
using namespace std;

class DynamicString {
private:
    char *str;
    
public:
    DynamicString(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        cout << "Constructor: Memory allocated" << endl;
    }
    
    ~DynamicString() {
        delete[] str;
        cout << "Destructor: Memory deallocated" << endl;
    }
    
    void display() {
        cout << "String: " << str << endl;
    }
};

int main() {
    DynamicString ds("Hello, World!");
    ds.display();
    
    return 0;
}
