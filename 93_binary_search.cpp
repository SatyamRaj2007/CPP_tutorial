#include<iostream>
using namespace std;

// Find first occurrence
int firstOccurrence(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            ans = mid;        // store index
            end = mid - 1;    // move left
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

// Find last occurrence
int lastOccurrence(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            ans = mid;        // store index
            start = mid + 1;  // move right
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter sorted elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to search: ";
    cin>>key;

    int first = firstOccurrence(arr, n, key);
    int last  = lastOccurrence(arr, n, key);

    if(first == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"First occurrence: "<<first<<endl;
        cout<<"Last occurrence: "<<last<<endl;
        cout<<"Total occurrences: "<<(last - first + 1);
    }

    return 0;
}
