#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<" hie ";
    }
};
class B:public A{
    public:
    B(){
        cout<<" hello ";
    }
};

int main(){
    B b;
    return 0;
}
