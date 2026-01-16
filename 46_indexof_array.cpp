#include<iostream>
using namespace std;
int main(){

    int i;
    cout << "Enter number of elements: ";
    cin >> i; 
    int num[i];
    for(int j=0;j<i;j++){
        cout<<"enter number to store here:";
        cin>>num[j];
    }

    for(int j=0;j<i;j++){
        cout<<num[j]<<" having index:"<<j<<endl;
    }

    return 0;
}