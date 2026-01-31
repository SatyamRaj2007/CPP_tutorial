#include<iostream>
using namespace std;

class Sumation {
public:
    int sum(int a, int b) {  
        return a + b;
    }

    void show(int result) {  
        cout << "Sum = " << result;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Sumation m;
    int result = m.sum(x, y); 
    m.show(result);           

    return 0;
}
