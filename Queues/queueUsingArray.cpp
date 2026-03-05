#include <iostream>
using namespace std;

class myQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int currentSize;

public:
    myQueue(int n) {
        capacity = n;
        arr = new int[n];
        front = 0;
        rear = 0;
        currentSize = 0;
    }

    // Destructor to prevent memory leaks
    ~myQueue() {
        delete[] arr;
    }

    bool isEmpty() {
        return currentSize == 0;
    }

    bool isFull() {
        return currentSize == capacity;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow: Cannot enqueue " << x << endl;
            return;
        }
        arr[rear] = x;
        rear = (rear + 1) % capacity;
        currentSize++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow: Cannot dequeue" << endl;
            return;
        }
        front = (front + 1) % capacity;
        currentSize--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        int actualRear = (rear - 1 + capacity) % capacity;
        return arr[actualRear];
    }

    int size() {
        return currentSize;
    }
};

int main() {
    // Initialize a queue of size 5
    myQueue q(5);

    cout << "Enqueuing 10, 20, 30..." << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    cout << "Dequeuing..." << endl;
    q.dequeue();

    cout << "New front element: " << q.getFront() << endl;
    cout << "Current size: " << q.size() << endl;

    return 0;
}