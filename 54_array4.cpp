#include<iostream>
using namespace std;

void printUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int i;
    cout<<"enter size of array:";
    cin>>i;
    int arr[i];
    cout<<"enter element of array:"<<endl;
    for(int j=0;j<i;j++){
        cin>>arr[j];
    }

    printUnique(arr,i);
    return 0;
}