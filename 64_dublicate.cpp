#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arr:";
    cin>>n;

    int arr[n];
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"enter index:"<<i<<" and "<<j<<endl;
                cout<<"dublicate element is:"<<arr[i]<<" "<<endl;
                found=true ;
            }
        }
    }


      if(!found) {
        cout << "No duplicates found in the array." << endl;
    }

    return 0;

}