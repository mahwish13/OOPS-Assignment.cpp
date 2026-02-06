// program64_common_friend.cpp
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
private:
    int valueA;
    
public:
    ClassA(int v) : valueA(v) {}
    
    friend void compareValues(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;
    
public:
    ClassB(int v) : valueB(v) {}
    
    friend void compareValues(ClassA, ClassB);
};

void compareValues(ClassA a, ClassB b) {
    cout << "Value in ClassA: " << a.valueA << endl;
    cout << "Value in ClassB: " << b.valueB << endl;
    
    if (a.valueA > b.valueB) {
        cout << "ClassA has larger value" << endl;
    } else if (a.valueA < b.valueB) {
        cout << "ClassB has larger value" << endl;
    } else {
        cout << "Both have equal values" << endl;
    }
}

int main() {
    ClassA objA(50);
    ClassB objB(75);
    
    compareValues(objA, objB);
    
    return 0;
}
