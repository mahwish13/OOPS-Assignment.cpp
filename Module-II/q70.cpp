// program70_swap_friend.cpp
#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    Number(int v) : value(v) {}
    
    friend void swapValues(Number&, Number&);
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

void swapValues(Number& n1, Number& n2) {
    int temp = n1.value;
    n1.value = n2.value;
    n2.value = temp;
}

int main() {
    Number num1(10);
    Number num2(20);
    
    cout << "Before swap:\n";
    num1.display();
    num2.display();
    
    swapValues(num1, num2);
    
    cout << "\nAfter swap:\n";
    num1.display();
    num2.display();
    
    return 0;
}
