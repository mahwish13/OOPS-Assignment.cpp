// program143_split_file.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("source.txt");
    ofstream out1("part1.txt"), out2("part2.txt");
    string line;
    int count = 0;

    while (getline(in, line)) {
        if (count % 2 == 0) out1 << line << endl;
        else out2 << line << endl;
        count++;
    }

    in.close();
    out1.close();
    out2.close();
    cout << "File split completed." << endl;
    return 0;
}
