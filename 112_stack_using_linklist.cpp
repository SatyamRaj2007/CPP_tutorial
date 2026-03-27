#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL; 

void push(int value) {
    Node* newNode = new Node();

    if (!newNode) {
        cout << "Stack Overflow\n";
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    cout << value << " pushed into stack\n";
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }

    Node* temp = top;
    cout << top->data << " popped from stack\n";

    top = top->next;
    delete temp;
}

void peek() {
    if (top == NULL) {
        cout << "Stack is empty\n";
    } else {
        cout << "Top element: " << top->data << endl;
    }
}

void display() {
    if (top == NULL) {
        cout << "Stack is empty\n";
        return;
    }

    Node* temp = top;
    cout << "Stack elements:\n";

    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();
    pop();

    display();

    return 0;
}