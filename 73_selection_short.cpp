#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     //selection short//
     for(int i=0;i<n-1;i++){
        int smallindex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[smallindex]){
                smallindex=j;
            }
        }
        swap(v[i],v[smallindex]);
     }

     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}