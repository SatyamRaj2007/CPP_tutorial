#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before deletion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int position;
    cout << "\nEnter position to delete element (1-based index): ";
    cin >> position;

    // Validation
    if(position < 1 || position > n) {
        cout << "Invalid position! Cannot delete.";
    }
    else {
        // Left shift logic
        for(int j = position - 1; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        n--;   // reduce array size
    }

    cout << "\nArray after deletion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
