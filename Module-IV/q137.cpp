// program137_binary_read_write.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    ofstream out("numbers.bin", ios::binary);
    out.write((char*)numbers, sizeof(numbers));
    out.close();

    int readNumbers[5];
    ifstream in("numbers.bin", ios::binary);
    in.read((char*)readNumbers, sizeof(readNumbers));
    in.close();

    for (int i = 0; i < 5; i++)
        cout << readNumbers[i] << " ";
    cout << endl;

    return 0;
}
