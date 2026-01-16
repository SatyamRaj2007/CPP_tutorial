// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n > 0 && (n & (n - 1)) == 0)
//         cout << "Yes, it is a power of 2";
//     else
//         cout << "No, it is not a power of 2";

//     return 0;
// }




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    bool isposetive=(n>0);
    bool haveone=((n&(n-1))==0);

    if( isposetive && haveone){
        cout<<n<<"is power of two";
    }else{
        cout<<n<<" is not a power of two"<<endl;
    }


    return 0;
}