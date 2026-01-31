#include<iostream>
using namespace std;
class student{
    int a,b;
    public:
    void fun(){
        cin>>a>>b;

    }
    void fun1(){
        cout<<a<<" "<<b;
        
    }
    
};
int main(){
    student o;
    o.fun();
    o.fun1();

    return 0;

}