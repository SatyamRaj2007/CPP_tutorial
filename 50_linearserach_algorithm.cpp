#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[]={2,5,4,6,8,7,9,5};
    int size=8;
    int target=8;

    int index = linearsearch(arr, size, target);

    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}