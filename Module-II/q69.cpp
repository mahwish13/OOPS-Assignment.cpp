// program69_friendship_not_mutual.cpp
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
private:
    int dataA;
    
public:
    ClassA(int d) : dataA(d) {}
    
    void displayB(ClassB b);  // Can access ClassB's private data
};

class ClassB {
private:
    int dataB;
    
public:
    ClassB(int d) : dataB(d) {}
    
    friend class ClassA;  // ClassA is friend of ClassB
    
    // ClassB cannot access ClassA's private data
    // void displayA(ClassA a) {
    //     cout << a.dataA;  // ERROR: cannot access private member
    // }
};

void ClassA::displayB(ClassB b) {
    cout << "DataB from ClassA: " << b.dataB << endl;
}

int main() {
    ClassA objA(100);
    ClassB objB(200);
    
    objA.displayB(objB);  // Works fine
    
    return 0;
}
