#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cout<<"enter size of vector";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

    int choice=0;
    while(choice!=0)
    cout<<"choice:";
     
    return 0;
}