#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"enter char:";
    cin>>ch;

    if(ch>='a'&&ch<='z'){
        cout<<"character is lowercase\n";
    }else{
        cout<<"character is uppercase\n";
    }
     


    return 0;
}