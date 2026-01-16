#include<iostream>
using namespace std;
int main(){

    int n;
    int sum=0;
    cout<<"enter n number:";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum+=i;
        if(i==5){
            break;
        }
    }

    cout<<"sum of n number="<<sum<<endl;
   
    return 0;


} 