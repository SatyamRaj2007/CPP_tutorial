#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        long long invCount = 0;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                invCount += mid - left + 1;
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return invCount;
    }

    long long mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high)
            return 0;

        int mid = low + (high - low) / 2;

        long long invCount = 0;

        invCount += mergeSort(arr, low, mid);
        invCount += mergeSort(arr, mid + 1, high);
        invCount += merge(arr, low, mid, high);

        return invCount;
    }

    long long inversionCount(vector<int>& arr) {
        if (arr.empty())
            return 0;

        return mergeSort(arr, 0, arr.size() - 1);
    }
};

int main() {
    vector<int> arr = {5, 3, 2, 4, 1};

    Solution obj;

    cout << "Number of Inversions = "
         << obj.inversionCount(arr);

    return 0;
}