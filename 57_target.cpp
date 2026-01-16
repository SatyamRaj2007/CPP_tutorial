#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter number of elemnet:";
    cin>>n;
    int arr[n];
    cout<<"Enter element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target:";
    cin>>target;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<j<<","<<i;
            }
        }
    }

    return 0;

 }