#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int add=0;
    for(int j=0;j<size;j++){
        add+=arr[j];
    }

    return add;
}

int product(int arr[],int size){
    long long multiplication=1;
    for(int j=0;j<size;j++){
        multiplication*=arr[j];
    }

    return multiplication;
}

int main(){
    int i;
    cout<<"enter size of array:";
    cin>>i;
    int arr[i];
    cout<<"enter element of array:"<<endl;
    for(int j=0;j<i;j++){
        cin>>arr[j];
    }

    cout<<"sum of elemnts of given array is:"<<sum(arr,i)<<endl;
    cout<<"product of elements of given array is:"<<product(arr,i)<<endl;


    return 0;
}