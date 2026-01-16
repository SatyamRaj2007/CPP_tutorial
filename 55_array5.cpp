// #include<iostream>
// using namespace std;

// void intersection(int arr1[], int n,int arr2[],int m) {
//     for (int i = 0; i < n; i++) {
//         bool ispresent = true;

//         for (int j = 0; j < 2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 ispresent = true;
//                 break;
//             }
//         }

//         if (ispresent) {
//             cout << arr1[i] << " ";
//         }
//     }
// }

// int main(){
//     int i;
//     cout<<"enter size of array 1:";
//     cin>>i;
//     int arr1[i];
//     cout<<"enter element of array 1:"<<endl;
//     for(int j=0;j<i;j++){
//         cin>>arr1[j];
//     }

//     int k;
//     cout<<"enter size of array 2:";
//     cin>>k;
//     int arr2[k];
//     cout<<"enter element of array 2:"<<endl;
//     for(int j=0;j<k;j++){
//         cin>>arr2[j];
//     }

//     intersection(arr1,i,arr2,k);
//     return 0;
// }

#include <iostream>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int m) {
    for (int i = 0; i < n; i++) {
        bool isPresent = false;

        // check if arr1[i] exists in arr2
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                isPresent = true;
                break;
            }
        }

        // print only if found in arr2
        if (isPresent) {
            cout << arr1[i] << " ";
        }
    }
}

int main() {
    int n;
    cout << "enter size of array 1: ";
    cin >> n;

    int arr1[n];
    cout << "enter element of array 1:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cout << "enter size of array 2: ";
    cin >> m;

    int arr2[m];
    cout << "enter element of array 2:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection elements: ";
    intersection(arr1, n, arr2, m);

    return 0;
}
