#include<iostream>

using namespace std;

class a{
    int x;
    public:
    a(int a){
        x=a;
    }
    void operator ++(){
        --x;
    }
    void display(){
        cout<<"x="<<x<<endl;
    }
};
int main(){
    a obj(5);
    obj.display();
    ++obj;
    obj.display();
    return 0;
}