#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class MyStack {
private:
    Node* top;
    int size;

public:
    MyStack() {
        top = nullptr;
        size = 0;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        size++;
    }

    void pop() {
        if (isEmpty()) return;
        
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int peek() {
        if (isEmpty()) return -1;
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
    
    int getSize() {
        return size;
    }
};

int main() {
    MyStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    cout << "Top after pop: " << s.peek() << endl;
    cout << "Stack size: " << s.getSize() << endl;

    return 0;
}