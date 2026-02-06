// program28_do_while_series.cpp
#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    
    cout << "Enter number of terms: ";
    cin >> n;
    
    cout << "Number series: ";
    
    do {
        cout << i << " ";
        sum += i;
        i++;
    } while (i <= n);
    
    cout << "\nSum = " << sum << endl;
    
    return 0;
}
