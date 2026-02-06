// program76_adt_queue.cpp
#include <iostream>
#define MAX 100
using namespace std;

class Queue {
private:
    int arr[MAX];
    int front, rear;
    
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    
    bool isEmpty() {
        return (front == -1 || front > rear);
    }
    
    bool isFull() {
        return (rear == MAX - 1);
    }
    
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = value;
        cout << value << " enqueued" << endl;
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        return arr[front++];
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();
    
    return 0;
}
