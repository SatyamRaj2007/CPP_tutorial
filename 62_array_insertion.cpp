#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];   // safer than variable length array

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int position, data;
    cout << "\nEnter position to insert data (1-based index): ";
    cin >> position;

    cout << "Enter data to insert: ";
    cin >> data;

    // Validation
    if(position < 1 || position > n + 1) {
        cout << "Overflow! Cannot insert.";
    } 
    else {
        // Right shift
        for(int j = n; j >= position; j--) {
            arr[j] = arr[j - 1];
        }

        arr[position - 1] = data;
        n++;
    }

    cout << "\nArray after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

