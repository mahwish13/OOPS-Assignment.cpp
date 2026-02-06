// program33_second_largest.cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = INT_MIN, secondLargest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    cout << "Second largest element: " << secondLargest << endl;
    
    return 0;
}
