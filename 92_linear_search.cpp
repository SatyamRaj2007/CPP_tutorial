#include<iostream>
using namespace std;

int linearsearch(int key, int arr[], int n){
    bool found = false;
    int count = 0;   

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            cout << "Element found at index: " << i << endl;
            found = true;
            count++;   
        }
    }

    if(!found){
        cout << "Element not found" << endl;
    }

    return count;   
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    
    int total = linearsearch(target, arr, n);
    cout<<"Total occurrences: "<<total;

    return 0;
}

