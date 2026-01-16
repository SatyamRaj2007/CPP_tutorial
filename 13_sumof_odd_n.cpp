#include<iostream>
using namespace std;
int main(){

    int start,end,i,sum=0;

    cout<<"start add number from:";
    cin>>start;

    cout<<"add number to:";
    cin>>end;

    for(int i=start;i<=end;i++){
            if(i%2!=0){
                sum+=i;
            } 
    }
    cout<<"sum of number is:"<<sum;



    return 0;

}