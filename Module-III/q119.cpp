// program119_shopping_cart.cpp
#include <iostream>
using namespace std;

class Cart {
private:
    int items;
    double pricePerItem;

public:
    Cart(int i, double p) {
        items = i;
        pricePerItem = p;
    }

    double totalCost() {
        return items * pricePerItem;
    }

    void display() {
        cout << "Total Cost: " << totalCost() << endl;
    }
};

int main() {
    Cart c(3, 1500);
    c.display();

    return 0;
}
