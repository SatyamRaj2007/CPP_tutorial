#include<iostream>
using namespace std;
int main(){

    int n,i=1;
    int sum=0;
    cout<<"enter n number:";
    cin>>n;

    while(i<=n){
        sum+=i;
        i++;
    }

    cout<<"sum of n number="<<sum<<endl;
   
    return sum;


} 