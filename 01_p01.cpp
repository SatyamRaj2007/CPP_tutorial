#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"inter value of a:"<<endl;
    cin>>a;
    cout<<"inter value of b:"<<endl;
    cin>>b;
    int sum=(a+b);
    cout<<"a+b:"<<sum<<endl;
    int sub=(a-b);
    float multi=(a*b);
    float div=((float)a/b);
    int remain=(a%b);
    cout<<"a-b:"<<sub<<endl;
    cout<<"a*b:"<<multi<<endl;
    cout<<"a/b:"<<div<<endl;
    cout<<"a%b:"<<remain<<endl;
    return 0;
}