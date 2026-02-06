// program47_largest_class.cpp
#include <iostream>
using namespace std;

class Comparator {
public:
    int findLargest(int a, int b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Comparator comp;
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Largest number: " << comp.findLargest(num1, num2) << endl;
    
    return 0;
}
