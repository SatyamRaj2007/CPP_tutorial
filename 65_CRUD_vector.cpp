#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "enter size of vector: ";
    cin >> n;

    vector<int> vec(n);

    cout << "enter element of vector" << endl;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << "\nelement of vector:\n";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    cout << endl;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "\nafter adding element in vector:\n";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    vec.pop_back();

    cout << "\nafter deleting element in vector:\n";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
