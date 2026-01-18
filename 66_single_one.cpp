#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair found at positions: "
                     << i + 1 << " and " << j + 1 << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "Target sum not available";
    }

    return 0;
}
