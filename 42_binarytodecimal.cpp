#include<iostream>
using namespace std;

bool isBinary(int num){

    int digit;

    if (num == 0){
        return true;
    }

    while(num>0){
        digit=num%10;
        if(digit!=0&&digit!=1){
            return false;
        }

        num/=10;
    }
    
    return true;

}

int binaryToDecimal(int num){
    int remainder,power=1,sum=0;
    while(num>0){

        remainder=num%10;
        sum+=(remainder*power);
        power*=2;
        num/=10;

    }

    return sum;

}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    if (!isBinary(n)) {
        cout << "111Invalid input! Please enter a valid binary number (only 0 and 1)." << endl;
    } else {
        cout << "Decimal value: " <<binaryToDecimal(n) << endl;
    }

    return 0;
}