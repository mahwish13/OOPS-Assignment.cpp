// program5_const_keyword.cpp
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    const int MAX_SIZE = 100;
    
    cout << "Constant values:\n";
    cout << "PI = " << PI << endl;
    cout << "MAX_SIZE = " << MAX_SIZE << endl;
    
    // PI = 3.14; // This would cause compilation error
    
    int radius = 5;
    double area = PI * radius * radius;
    
    cout << "\nArea of circle with radius " << radius << " = " << area << endl;
    
    return 0;
}
