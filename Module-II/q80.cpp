// program80_dynamic_objects.cpp
#include <iostream>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
    
public:
    Product(int i, string n, double p) {
        id = i;
        name = n;
        price = p;
        cout << "Product created: " << name << endl;
    }
    
    ~Product() {
        cout << "Product destroyed: " << name << endl;
    }
    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    // Dynamic single object
    Product* p1 = new Product(101, "Laptop", 999.99);
    p1->display();
    delete p1;
    
    cout << "\nCreating array of objects:\n";
    
    // Dynamic array of objects
    int n = 3;
    Product* products = new Product[3]{
        Product(201, "Mouse", 29.99),
        Product(202, "Keyboard", 79.99),
        Product(203, "Monitor", 299.99)
    };
    
    for (int i = 0; i < n; i++) {
        products[i].display();
    }
    
    delete[] products;
    
    return 0;
}
