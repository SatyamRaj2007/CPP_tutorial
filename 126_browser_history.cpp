#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string url;
    Node* prev;
    Node* next;

    Node(string url) {
        this->url = url;
        prev = NULL;
        next = NULL;
    }
};

class BrowserHistory {
    Node* current;

public:
    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }

    void visit(string url) {
        Node* newNode = new Node(url);

        current->next = newNode;
        newNode->prev = current;

        current = newNode;
    }

    string back(int steps) {
        while (steps > 0 && current->prev != NULL) {
            current = current->prev;
            steps--;
        }

        return current->url;
    }

    string forward(int steps) {
        while (steps > 0 && current->next != NULL) {
            current = current->next;
            steps--;
        }

        return current->url;
    }
};

int main() {
    BrowserHistory browser("leetcode.com");

    browser.visit("google.com");
    browser.visit("youtube.com");
    browser.visit("github.com");

    cout << browser.back(1) << endl;
    cout << browser.back(1) << endl;
    cout << browser.forward(1) << endl;

    browser.visit("facebook.com");

    cout << browser.forward(2) << endl;

    return 0;
}