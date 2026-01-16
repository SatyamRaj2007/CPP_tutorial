#include<iostream>
using namespace std;
int binary(int num){
    int sum=0,power=1,remainder;
    while(num>0){
        remainder=num%2;
        num/=2;
        sum+=(remainder*power);
        power*=10;
    }

    return sum;

}
int main(){

    int n;
    cout<<"Change number into binary number"<<endl;
    cout<<"Enter a number to change into binary:";
    cin>>n;
    cout<<binary(n)<<endl;


    return 0;
}