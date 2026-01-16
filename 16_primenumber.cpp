#include<iostream>
using namespace std;
int main(){

   int n,i;
   bool isprime=true;
   cout<<"enter a number:";
   cin>>n;
   if(n<=1){
    cout<<"given number is not a prime number";
   }else{
    for(i=2;i*i<=n;i++){

        if(n%i==0){
           isprime=false;
           break;
        }
    }
    if(isprime){
        cout<<"given number is a prime number";
    }else{
        cout<<"given number is not a prime number";
    }
   }
   

    return 0;

}