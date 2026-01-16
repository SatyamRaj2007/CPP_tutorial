#include<iostream>
using namespace std;
int main(){

    int n;
    int sum=0;
    cout<<"enter n number:";
    cin>>n;
        for(int i=0;i<=n;i++){
            if(i%2==0){
                sum+=i;
            } 
        }
         cout<<"sum of even number in 0 to n number="<<sum<<endl;
   
    return 0;

} 