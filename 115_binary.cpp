#include<iostream>
using namespace std;
class A {
    public:
    int x;
    A(int a) {
        x = a;
    }
    void operator +(A obj2) {
        x = x + obj2.x;
    }
    void display() {
        cout << "x=" << x << endl;
    }
};
int main() {
    A obj1(5);
    A obj2(10);
    obj1.display();
    obj1+obj2;
    obj1.display();
    obj2.display();
    return 0;
}   