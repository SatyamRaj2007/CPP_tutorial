#include<iostream>
using namespace std;
long powerof(long num, long power){
    int pow=1;
    for(int i=1;i<=power;i++){
        pow*=num;
    }
    
    return pow;
}
int main(){
    long long x,n;
    cout<<"enter base:"<<endl;
    cin>>x;

    cout<<"inter power:"<<endl;
    cin>>n;

    cout<<powerof(x,n)<<endl;

    return 0;
}