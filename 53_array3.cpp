#include<iostream>
#include<climits>
using namespace std;

void maxmin(int arr[], int size){

    int minIndex = 0;
    int maxIndex = 0;

    // swap index for swapping in real array

    for(int j = 0; j < size; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
        if(arr[j] > arr[maxIndex]){
            maxIndex = j;
        }
    }

    // swap elements in array
    swap(arr[minIndex], arr[maxIndex]);
}

int main(){
    int i;
    cout << "Enter size of array: ";
    cin >> i;

    int arr[i];
    cout << "Enter elements of array:" << endl;
    for(int j = 0; j < i; j++){
        cin >> arr[j];
    }

    maxmin(arr, i);

    cout << "After swapping smallest and largest elements:" << endl;
    for(int j = 0; j < i; j++){
        cout << arr[j] << " ";
    }

    return 0;
}


