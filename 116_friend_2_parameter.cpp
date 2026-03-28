#include<iostream>
using namespace std;
class A {
    private:
    int x;
    public:
    A(int a) {
        x=a;
    }
    friend void operator +(A &obj1, A obj2); 
    
    void display() {
        cout << "x=" << x << endl;
    }
};
void operator +(A &obj1, A obj2) {
         obj1.x=obj1.x + obj2.x;
}    
int main() {
    A obj1(5);
    A obj2(10);
    obj1.display();
    obj1+obj2;
    obj1.display();
    obj2.display();
    return 0;
}   