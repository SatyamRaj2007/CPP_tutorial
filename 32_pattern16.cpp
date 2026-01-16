#include<iostream>
using namespace std;
int main(){
    int n=5;
    // upper part of hollow diamond
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }

        cout<<"*";
    if(i!=1){
        for(int j=1;j<=(2*(i-1))-1;j++){
            cout<<" ";
        }
            cout<<"*"; 
        }

        cout<<endl;
        
    }

    // lower part of hollow diamond
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }

        cout<<"*";

        if(i!=n-1){

        for(int k=(2*(n-1-i))-1;k>=1;k--){
            cout<<" ";
        }
        cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}