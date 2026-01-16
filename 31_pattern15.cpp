#include<iostream>
using namespace std;
int main(){

    // upper part of diamond
    int n=10;
   for(int i=1;i<=n;i++){  
    for(int j=n-i;j>=1 ;j--){
        cout<<" ";

    }
    for(int j=1;j<=i;j++){

        cout<<"*";
    }
    
    for(int k=i-1;k>=1;k--){
        cout<<"*";
    }
    cout<<endl;
   }


    // lower part of diamond
    
   for(int i=1;i<=n-1;i++){  
    for(int j=i;j>=1 ;j--){
        cout<<" ";

    }
    for(int j=1;j<=n-i;j++){

        cout<<"*";
    }
    
    for(int k=n-i-1;k>=1;k--){
        cout<<"*";
    }
    cout<<endl;
   }   
 
    return 0;

}