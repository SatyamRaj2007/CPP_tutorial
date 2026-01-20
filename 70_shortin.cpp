#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int key = v[n - 1];     // store last element
    int j = n - 2;

    while (j >= 0 && v[j] > key) {
        v[j + 1] = v[j];   // shift right

        // print after shift
        for (int x : v) cout << x << " ";
        cout << endl;

        j--;
    }

    v[j + 1] = key;        // insert key

    // print final array
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}