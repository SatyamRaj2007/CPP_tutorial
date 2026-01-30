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
    sort(v.begin(),v.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]!=v[i-1] && v[i]!=v[i+1]){
            cout<<v[i]<<" "<<endl;
            count++;
        }
    }

    cout<<count;

    return 0;
}