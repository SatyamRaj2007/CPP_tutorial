#include<iostream>

using namespace std;

class A{
    private:
    int x;
    public:
    A(int a){
        x=a;
    }
    friend void operator++(A &obj);
    void display(){
        cout<<"x="<<x<<endl;
    }
    
};
void operator++(A &obj){
        --obj.x;
    }
int main(){
    A obj(5);
    ++obj;
    obj.display();
    return 0;
}
