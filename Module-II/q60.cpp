// program60_static_initialization.cpp
#include <iostream>
using namespace std;

class StaticDemo {
private:
    static int count;
    int id;
    
public:
    StaticDemo() {
        id = ++count;
        cout << "Object " << id << " created" << endl;
    }
    
    static int getCount() {
        return count;
    }
    
    void display() {
        cout << "Object ID: " << id << ", Total objects: " << count << endl;
    }
};

int StaticDemo::count = 0;

int main() {
    StaticDemo s1, s2, s3;
    
    s1.display();
    s2.display();
    s3.display();
    
    cout << "Total count: " << StaticDemo::getCount() << endl;
    
    return 0;
}
