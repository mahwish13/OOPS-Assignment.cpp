// program56_destructor.cpp
#include <iostream>
using namespace std;

class Demo {
private:
    int id;
    
public:
    Demo(int i) {
        id = i;
        cout << "Constructor called for object " << id << endl;
    }
    
    ~Demo() {
        cout << "Destructor called for object " << id << endl;
    }
};

int main() {
    cout << "Creating objects...\n";
    Demo d1(1);
    Demo d2(2);
    
    {
        Demo d3(3);
        cout << "Inside block\n";
    }
    
    cout << "Outside block\n";
    
    return 0;
}
