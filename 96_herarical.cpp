#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout << "hello ";
    }
};

class B : public A{
public:
    B(){
        cout << "world ";
    }
};

class C : public A{
public:
    C(){
        cout << "xyz ";
    }
};

class D : public A{
public:
    D(){
        cout << "abc ";
    }
};

int main(){
    B b;
    C c1;
    D d1;

    return 0;
}
