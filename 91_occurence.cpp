#include<iostream>
using namespace std;

int lowerBound(int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int upperBound(int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cout << "Enter target: ";
    cin >> target;

    int lb = lowerBound(arr, n, target);
    int ub = upperBound(arr, n, target);

    int count = ub - lb;

    if(count > 0)
        cout << "Element occurs " << count << " times.";
    else
        cout << "Element not found.";

    return 0;
}
