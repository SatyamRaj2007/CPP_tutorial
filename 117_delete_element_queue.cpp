#include<iostream>
using namespace std;
class queue {
    private:
    int arr[5];
    int front;
    int rear;
    public:
    queue() {
        front=-1;
        rear=-1;
    }
    void enqueue(int x) {
        if(rear==4) {
            cout << "Queue is full" << endl;
        }
        else {
            rear++;
            arr[rear]=x;
        }
    }
    void dequeue() {
        if(front==rear) {
            cout << "Queue is empty" << endl;
        }
        else {
            front++;
            cout << "Deleted element: " << arr[front] << endl;
        }
    }
};
int main() {
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}