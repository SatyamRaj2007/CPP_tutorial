#include<iostream>
class A{
    public:
    int x;
};
class B:public A{
    public:
    int y;
};
using namespace std;
int main(){
    A a;
    a.x=2;
    B b;
    b.x=1;
    b.y=3;
    cout<<a.x<<" "<<b.x<<" "<<b.y;
    return 0;
}