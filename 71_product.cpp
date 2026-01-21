#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,ans;
    cout << "enter size of array: ";
    cin >> n;

    vector<int> v(n);
    vector<int>store;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int product=1;
    for(int i=0;i<n;i++){
        product*=v[i];
        ans=product/v[i];
        store.push_back(ans);
    }

    for(int i = 0; i < n; i++){
        cout<< store[i]<<" ";
    }

    
    return 0;
}