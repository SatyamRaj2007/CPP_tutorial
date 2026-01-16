#include<iostream>
using namespace std;

bool armstrong(int n){
    int original,temp,count=0,sum=0,digit;

     original=n;  //comparing it through last from temp
      temp=n;     //another variable temp helps to compare orginal number with resultant number

    while(temp>0){
        temp/=10;
        count++;
    }

    // Here we do temp=n because to count digit we seprate every digit so that's why temp become temp=lastdigit but we need n for further calcluation
    temp=n;

    while(temp>0){ 
        digit=temp%10;

        int power=1; //rest power

        // here we find power pow(digit,count)
        
        for(int i=1;i<=count;i++){
            power=power*digit;
        }
        
        // sum of power that is power(3,3)=27,power(5,3)=125,power(1,3)=1,  sum=27+125+1

        sum+=power;

        temp/=10;  // removes the digit you just processed so the loop can move to the next digit.
     }

    return (sum==original);   
}
int main(){

    int num;
    cout<<"enter a number to check that number is armstrong or not:";
    cin>>num;
    if(armstrong(num)){

        cout<<num<<" is a armstrong number"<<endl;
    }else{

         cout<<num<<" is not a armstrong number"<<endl;
    }

    return 0;

}