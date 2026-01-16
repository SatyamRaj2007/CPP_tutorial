#include<iostream>
using namespace std;
int main(){

    int n;
    int sum=0;
    cout<<"enter n number:";
    cin>>n;

   if(n>=0){
    
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                sum+=i;
            } 
        }
         cout<<"sum of posetive odd number in 1 to n number="<<sum<<endl;
    }else if(n<=0){
        for(int i=0;i>=n;i--){
            if(i%2!=0){
                sum+=i;
            } 
        }
         cout<<"sum of negative odd number in n to -1 number="<<sum<<endl;
    }
   
   
    return 0;


} 