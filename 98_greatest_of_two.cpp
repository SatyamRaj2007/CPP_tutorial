#include<iostream>
#include<algorithm>
using namespace std;

class Greater {
    public:
    int a;
    Greater(int x) {   
        a = x;
    }
};
class A:public Greater{
public:
    int b;

    A(int x,int y):Greater(x) {   
        b = y;
    }
};
class Compare:public A{
public:
    Compare(int x, int y): A(x,y) {}
    int findGreater() {
        return max(a, b);
    }
    void display(){
        cout << a <<" "<<endl;
        cout <<  b <<" "<< endl;
        cout <<  findGreater() <<" "<< endl;
    }
};

int main() {
    int x,y;
    cin >>x>>y;
    Compare c(x,y);
    c.display();
    return 0;
}

