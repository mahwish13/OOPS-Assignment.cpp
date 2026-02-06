// program72_static_member_function.cpp
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
    
public:
    Counter() {
        count++;
    }
    
    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl;
    
    Counter c1, c2, c3;
    
    cout << "After creating 3 objects: " << Counter::getCount() << endl;
    
    return 0;
}
