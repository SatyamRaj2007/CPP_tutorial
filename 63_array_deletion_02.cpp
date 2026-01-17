#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of class:";
    cin>>n;
    int arr[n];
    cout<<"enter element of class:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"element of class:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int position;
    cout<<"enter position of tabel for delet the element:";
    cin>>position;

    if(position<1||position>n){
        cout<<"invalid position! position does not exist";
    }else{
        for(int i=position-1;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    cout<<endl;
    
    cout<<"element of class:"<<endl;;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
