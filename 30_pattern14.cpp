#include<iostream>
using namespace std;
int main(){

    int n=10;
   for(int i=1;i<=n;i++){  
    for(int j=n-i;j>=1 ;j--){
        cout<<" ";

    }
    int m=1;
    for(int j=1;j<=i;j++){

        cout<<m;
        m++;

    }
    
    for(int k=i-1;k>=1;k--){
        cout<<k;
    }
    cout<<endl;
   }
 
    return 0;

}