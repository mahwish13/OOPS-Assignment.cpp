// program39_pointers.cpp
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;
    
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    
    *ptr = 20;
    cout << "\nAfter *ptr = 20:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    
    return 0;
}
