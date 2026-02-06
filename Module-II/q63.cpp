// program63_friend_function.cpp
#include <iostream>
using namespace std;

class Box {
private:
    int length;
    
public:
    Box(int l) : length(l) {}
    
    friend void displayLength(Box b);
};

void displayLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box box(10);
    displayLength(box);
    
    return 0;
}
