#include<iostream>
using namespace std;

// sum of numbers 1 to N
int sumof(int N){

    int i,sum=0;
    for(i=1;i<=N;i++){
        sum+=i;
    }
    return sum;
}
int main(){

    int num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"sum of numbers 1 to " <<num<<" is:"<<sumof(num)<<endl;
    
    return 0;
}