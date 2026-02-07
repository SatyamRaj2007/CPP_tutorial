#include <iostream>
using namespace std;

class solution {
public:
    int greatestof2number(int a, int b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }
};

int main() {
    int a, b;
    cin >>a>> b;

    solution s;
    cout << s.greatestof2number(a, b);

    return 0;
}

