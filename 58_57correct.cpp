#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    bool found = false; // To check if at least one pair exists

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found at indices: " << i << " and " << j << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pair found with sum " << target << endl;
    }

    return 0;
}
