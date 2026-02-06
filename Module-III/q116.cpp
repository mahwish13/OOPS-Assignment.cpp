// program116_product_inventory.cpp
#include <iostream>
using namespace std;

class Product {
private:
    string name;
    int quantity;

public:
    Product(string n, int q) {
        name = n;
        quantity = q;
    }

    void addStock(int q) {
        quantity += q;
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Product p("Laptop", 10);
    p.addStock(5);
    p.display();

    return 0;
}
