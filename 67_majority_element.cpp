#include <iostream>
#include <vector>
#include <algorithm>   // for sort
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> num(n);

    cout << "Enter elements of array:\n";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    // Sort the array
    sort(num.begin(), num.end());

    int freq = 1;
    int ans = num[0];

    // Find majority element
    for (int i = 1; i < n; i++) {
        if (num[i] == num[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = num[i];
        }

        if (freq > n / 2) {
            cout << "Majority element is: " << ans << endl;
            return 0;
        }
    }

    cout << "No majority element found" << endl;
    return 0;
}

