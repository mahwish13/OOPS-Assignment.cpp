// program52_parameterized_constructor.cpp
#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
    char title[100];
    char author[50];
    double price;
    
public:
    Book(const char* t, const char* a, double p) {
        strcpy(title, t);
        strcpy(author, a);
        price = p;
        cout << "Parameterized constructor called" << endl;
    }
    
    void display() {
        cout << "\n Book Details \n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b("C++ Programming", "Bjarne Stroustrup", 49.99);
    b.display();
    
    return 0;
}
