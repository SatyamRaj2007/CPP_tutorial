#include<iostream>
using namespace std;
int main(){
int n=15;

// upper part of butterfly

for(int i=1;i<=n;i++){

    // pattern

    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    
    // space

    for(int k=1;k<=2*(n-i);k++){
        cout<<" ";
    }
   
    // pattern

    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

// lower part of butterfly

for(int i=1;i<=n;i++){

    // pattern

    for(int j=n-i+1;j>=1;j--){
        cout<<"*";
    }
    
    // space

    for(int k=1;k<=2*(i-1);k++){
        cout<<" ";
    }

    // pattren

    for(int j=n-i+1;j>=1;j--){
        cout<<"*";
    }
    cout<<endl;
}

    return 0;

}