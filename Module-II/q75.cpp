// program75_adt_stack.cpp
#include <iostream>
#define MAX 100
using namespace std;

class Stack {
private:
    int arr[MAX];
    int top;
    
public:
    Stack() {
        top = -1;
    }
    
    bool isEmpty() {
        return (top == -1);
    }
    
    bool isFull() {
        return (top == MAX - 1);
    }
    
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack" << endl;
    }
    
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }
    
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    
    cout << "Top element: " << s.peek() << endl;
    cout << "Popped: " << s.pop() << endl;
    s.display();
    
    return 0;
}
