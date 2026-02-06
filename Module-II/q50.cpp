// program50_count_objects.cpp
#include <iostream>
using namespace std;

class Counter {
private:
    static int objectCount;
    
public:
    Counter() {
        objectCount++;
    }
    
    ~Counter() {
        objectCount--;
    }
    
    static int getCount() {
        return objectCount;
    }
};

int Counter::objectCount = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl;
    
    Counter c1, c2;
    cout << "After creating 2 objects: " << Counter::getCount() << endl;
    
    {
        Counter c3, c4, c5;
        cout << "After creating 3 more objects: " << Counter::getCount() << endl;
    }
    
    cout << "After block scope ends: " << Counter::getCount() << endl;
    
    return 0;
}
