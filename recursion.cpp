#include <iostream>
using namespace std;

bool power(int n){
    if(n == 1)
        return true;

    if(n <= 1 || n % 2 != 0)
        return false;

    return power(n / 2);
}

int main(){
    int x;
    cin>>x;

    if(power(x))
        cout << "True";
    else
        cout << "False";

    return 0;
}
