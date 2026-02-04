// program26_for_loop_series.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of terms: ";
    cin >> n;
    
    cout << "Natural numbers series: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Even numbers series: ";
    for (int i = 2; i <= n * 2; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Odd numbers series: ";
    for (int i = 1; i <= n * 2; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
