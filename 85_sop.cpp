#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int digitsum(int x){
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<int>result;
    for(int x:v){
        result.push_back(x*digitsum(x));
    }

    for(int x:result){
        cout<<x<<" ";
    }

    return 0;

}