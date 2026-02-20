#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    vector<int>v2(n);
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    vector<int>v3(n+m);
    for(int p=0;p<n+m;p++){
        if(p<n){
            v3[p]=v1[p];
        }
        else{
            v3[p]=v2[p-n];
        }
    }
    sort(v3.begin(),v3.end());
    for(int i=0;i<n+m;i++){
        cout<<v3[i]<<" ";
    }

    return 0;

}