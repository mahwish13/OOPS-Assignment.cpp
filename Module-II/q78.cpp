// program78_adt_polynomial.cpp
#include <iostream>
using namespace std;

class Term {
public:
    int coeff;
    int exp;
    Term* next;
    
    Term(int c, int e) {
        coeff = c;
        exp = e;
        next = NULL;
    }
};

class Polynomial {
private:
    Term* head;
    
public:
    Polynomial() {
        head = NULL;
    }
    
    void insertTerm(int coeff, int exp) {
        Term* newTerm = new Term(coeff, exp);
        
        if (head == NULL || head->exp < exp) {
            newTerm->next = head;
            head = newTerm;
            return;
        }
        
        Term* temp = head;
        while (temp->next != NULL && temp->next->exp > exp) {
            temp = temp->next;
        }
        
        newTerm->next = temp->next;
        temp->next = newTerm;
    }
    
    void display() {
        if (head == NULL) {
            cout << "0" << endl;
            return;
        }
        
        Term* temp = head;
        while (temp != NULL) {
            if (temp->coeff > 0 && temp != head) {
                cout << "+";
            }
            cout << temp->coeff << "x^" << temp->exp;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Polynomial poly;
    
    poly.insertTerm(5, 3);
    poly.insertTerm(4, 2);
    poly.insertTerm(-3, 1);
    poly.insertTerm(2, 0);
    
    cout << "Polynomial: ";
    poly.display();
    
    return 0;
}
