#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Size of container: ";
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
        cout << i << " ";
    }

    return 0;
}

