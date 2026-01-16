#include<iostream>
using namespace std;
int sumofdigit(int num){
    int lastdigit,digitsum=0;
    while(num>0){
        lastdigit=num%10;
        num=num/10;
        digitsum+=lastdigit;
    }
    return digitsum;
}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<"sum of digit:"<<sumofdigit(n)<<endl;
    return 0;
}