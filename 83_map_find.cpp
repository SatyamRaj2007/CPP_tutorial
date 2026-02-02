#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    map<string, int> m;
    string key;
    int value;

    for (int i = 0; i < n; i++) {
        cout << "Enter key and value: ";
        cin >> key >> value;
        m[key] = value;  
    }

    cout << "\nMap elements:\n";
    for (auto p : m) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}

