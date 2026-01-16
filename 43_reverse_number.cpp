#include<iostream>
using namespace std;
int reverse(int num){
    int power=1,digit,sum=0;
    int digitcount=0;
    int temp=num;

    while(temp>0){
        temp=temp/10;
        digitcount++;
    }

    for(int i=1;i<digitcount;i++){
        power*=10;
    }


    while(num>0){
        digit=num%10;
        sum+=(digit*power);
        power/=10;
        num/=10;
    }

    return sum;

    

}

int main(){
    int n;
    cout<<"entre a number";
    cin>>n;
    cout<<"revrse number is:"<<reverse(n)<<endl;

    return 0;
}