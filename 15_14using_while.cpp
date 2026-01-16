#include<iostream>
using namespace std;
int main(){

    int n,i=0;
    int sum=0;
    cout<<"enter n number:";
    cin>>n;
        while(i<=n){
            if(i%2==0){
                sum+=i;
            } 
            i++;
        }
         cout<<"sum of even number in 0 to n number="<<sum<<endl;
   
    return 0;

} 