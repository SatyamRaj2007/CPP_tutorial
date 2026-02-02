#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Size of container: "<<endl;
    cin >> n;

    set<int> s;
    int x;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);  
    }

    cout << "Elements in set:\n";
    for (int i : s) {
        cout << i << " "<<endl;
    }

    int search;
    cout<<"enter element to search:";
    cin>>search;
    auto it=s.find(search);
    if(it!=s.end()){
        cout<<"element found"<<endl;
        cout<<"value = "<<*it<<endl;
    }else{
        cout<<"elemet not found"<<endl;
    }

    return 0;
}