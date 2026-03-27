#include<iostream>
#include<stack>
using namespace std;    
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    stack<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.push(x);
    }

    cout<<"Elements in stack: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}