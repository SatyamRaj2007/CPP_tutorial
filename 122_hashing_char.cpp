#include<iostream>
using namespace std;
 int main (){
    string s;
    cin>>s;

    //precompute

    int hash[26]={0};
    for (int i=0;i<s.length();i++){
    hash[s[i]-'a']++;
    }

    int q;
    cin >> q;
    while(q--){
        char x;
        cin >> x;
        cout << hash[x-'a'] << endl;
    }

    return 0;
}