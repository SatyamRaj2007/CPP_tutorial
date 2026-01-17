#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    
    cout<<"enter element of array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"array before insertion:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int position,value;
    cout<<"enter position to add the value:";
    cin>>position;
    cout<<"enter value to add:";
    cin>>value;

    if(position<1){
        cout<<"error!! invalid position";
    }else if(position>n+1){
        cout<<"overflow!! cannot insert";
    }else{
        for(int i=position;i>=position;i--){
            arr[i]=arr[i-1];
        }

        arr[position-1]=value;
        n++;
    }
    cout<<"array after insertion:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}