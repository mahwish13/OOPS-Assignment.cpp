// program49_nested_classes.cpp
#include <iostream>
using namespace std;

class Outer {
private:
    int outerData;
    
public:
    class Inner {
    private:
        int innerData;
        
    public:
        void setInnerData(int data) {
            innerData = data;
        }
        
        void displayInner() {
            cout << "Inner data: " << innerData << endl;
        }
    };
    
    void setOuterData(int data) {
        outerData = data;
    }
    
    void displayOuter() {
        cout << "Outer data: " << outerData << endl;
    }
};

int main() {
    Outer outer;
    Outer::Inner inner;
    
    outer.setOuterData(100);
    inner.setInnerData(200);
    
    outer.displayOuter();
    inner.displayInner();
    
    return 0;
}
