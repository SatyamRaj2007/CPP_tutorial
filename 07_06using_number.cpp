#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"enter char:";
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout<<"character is uppercase\n";
    }else{
        cout<<"character is lowercase\n";
    }
     


    return 0;
}