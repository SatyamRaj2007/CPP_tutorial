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

class C : public B{
public:
    C(){
        cout << "xyz ";
    }
};
int main(){
    
    C c1;
    

    return 0;
}