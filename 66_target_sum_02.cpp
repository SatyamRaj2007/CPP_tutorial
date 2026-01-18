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
    int start=0,end=n-1;

    while(start < end) {
    int sum = arr[start] + arr[end];

    if(sum == target) {
        cout << "Pair found: " << start << " and " << end << endl;
        found = true;
        break;
    }
    else if(sum < target) {
        start++;
    }
    else {
        end--;
    }
}

    if(!found) {
        cout << "Target sum not available";
    }

    return 0;
}