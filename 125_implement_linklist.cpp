#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class linklist {
    node* head;

public:
    linklist() {
        head = NULL;
    }

    void display() {
        node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtBeginning(int val) {
        node* newNode = new node(val);

        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        node* newNode = new node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
};

int main() {
    linklist l;

    l.insertAtBeginning(30);
    l.insertAtBeginning(20);
    l.insertAtBeginning(10);

    l.insertAtEnd(40);
    l.insertAtEnd(50);

    l.display();

    return 0;
}