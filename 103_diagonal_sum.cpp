#include<iostream>
#include<vector>
using namespace std;
 int main(){
    int n;
    cin >> n;
    int  m;
    cin >> m;
    int sum=0;
    vector<vector<int>>mat(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-1-i){
            sum+=mat[i][n-1-i];
        }

    }
    cout << sum << endl;
     return 0;
}