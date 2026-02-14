#include<iostream>
#include<algorithm>
using namespace std;

class A {
    public:
    int a;
    A(int x) {   
        a = x;
    }
};
class B:public A{
public:
    int b;

    B(int x,int y):A(x) {   
        b=x+y;
        cout<<b;
    }
};
class C:public A{
public:
    int b;

    C(int x,int y):A(x) {   
         b=x-y;
         cout<<b;
    }
};
int main(){
    int x,y;
    cin>>x>>y;
    B b1(x,y);
    cout<<endl;
    C c1(x,y);


    return 0;
}

