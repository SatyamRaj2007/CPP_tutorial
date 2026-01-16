#include<iostream>
using namespace std;
void primenumber(int n){
    bool isprime=true;
   if(n<=1){
    cout<<"prime number not exist!";
   }else{
    for(int i=2;i*i<=n;i++){

        if(n%i==0){
           isprime=false;
           break;
        }
    }
      if(isprime){
        cout<<n<<endl;
      }
  }
}

void number(int num){
    for(int j=2;j<=num;j++){
        primenumber(j);
    }
}

int main(){
   int a;
   cout<<"enter a number:";
   cin>>a;
   cout<<"prime numbers between 1 to "<<a<<" is:";
   number(a);


    return 0;
}