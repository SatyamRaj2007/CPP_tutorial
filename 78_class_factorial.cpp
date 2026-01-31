#include<iostream>
using namespace std;

class Sumation {
public:
    int fun(int a) {  
        int factorial=1;
        for(int i=1;i<=a;i++){
        factorial*=i;
        }
        return factorial;
    }

    void show(int result) {  
        cout << "factorial = " << result;
    }
};

int main() {
    int x;
    cout << "Enter numbers: ";
    cin >> x;

    Sumation m;
    int result = m.fun(x); 
    m.show(result);           

    return 0;
}