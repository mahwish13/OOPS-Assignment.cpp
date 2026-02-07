// program155_array_out_of_bound.cpp
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    try {
        int index;
        cout << "Enter index (0-4): ";
        cin >> index;
        if (index < 0 || index > 4) throw out_of_range("Index out of bounds");
        cout << "Value: " << arr[index] << endl;
    } catch (out_of_range &e) {
        cout << e.what() << endl;
    }

    return 0;
}
