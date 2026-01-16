#include<iostream>
using namespace std;

// factorial of a number
int factorial(int N){

    int i,fact=1;
    if(N<0){
        cout<<"factorial of negative number does not exist!"<<endl;
        return -1;
    }
    for(i=1;i<=N;i++){
        fact*=i;
    }
    return fact;
}
int main(){

    int num;
    cout<<"enter a number:";
    cin>>num;
    int result=factorial(num);
    if(result!=-1){
        cout<<"factorial of "<<num<<" is:"<<factorial(num)<<endl;
    }
    
    
    return 0;
}