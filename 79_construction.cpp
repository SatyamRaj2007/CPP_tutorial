#include<iostream>
using namespace std;
class s{
    public :
    int a,b;
    s(){
        a=2;
        b=3;
    }
};
int main(){
    s o;
    cout<<o.a<<" "<<o.b;
}