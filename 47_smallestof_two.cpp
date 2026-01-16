#include<iostream>
#include<climits>
using namespace std;
int main(){

    int i;
    cout << "Enter number of elements: ";
    cin >> i; 
    int num[i];
    for(int j=0;j<i;j++){
        cout<<"enter number to store here:";
        cin>>num[j];
    }

    int smallest=INT_MAX;
    int largest=INT_MIN;
    int smallindex,largeindex;

    for(int j=0;j<i;j++){
        if(num[j]<smallest){
            smallest=num[j];
            smallindex=j;
            
        }

        if(num[j]>largest){
            largest=num[j];
            largeindex=j;
            
        }

    }

    cout<<"smallest number is:"<<smallest<<" having index:"<<smallindex<<endl;
    cout<<"largest number is:"<<largest<<" having index:"<<largeindex<<endl;

    return 0;
}