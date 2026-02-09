#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class operation {
private:
    int a, b;

public:
    int x, y;

    void fun() {
        cin >> x >> y;
    }

    void fun1() {
        cout << "x: " << x << " y: " << y << endl;
    }

    int geta() {
        return a;
    }

    int sum(int x, int y) {
        a = x;
        b = y;
        return a + b;
    }

    int sub(int x, int y) {
        a = x;
        b = y;
        return a - b;
    }

    long long multiplication(long x, long y) {
        a = x;
        b = y;
        return a * b;
    }

    long long division(long x, long y) {
        a = x;
        b = y;
        if (b == 0) {
            cout << "Division by zero not allowed\n";
            return 0;
        }
        return a / b;
    }

    int remainder(int x, int y) {
        a = x;
        b = y;
        return a % b;
    }

    int power(int x, int y) {
        a = x;
        b = y;
        return pow(a, b);
    }

    void factorial(int x, int y) {
        int fact = 1;

        for (int i = 1; i <= x; i++)
            fact *= i;

        for (int i = 1; i <= y; i++)
            fact *= i;

        cout << "Factorial of " << x << " and " << y << " is: " << fact << endl;
    }

    int fabonacci(int n) {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else
            return fabonacci(n - 1) + fabonacci(n - 2);
    }

    operation(int x, int y) {
        a = x;
        b = y;
    }

    operation(const operation &o) {
        a = o.a;
        b = o.b;
    }

    operation(int x) {
        a = x;
        b = 0;
    }
};

int main() {
    operation obj1(5, 10);

    cout << "Enter x and y: ";
    obj1.fun();

    cout << "Sum: " << obj1.sum(5, 10) << endl;
    cout << "Subtraction: " << obj1.sub(5, 10) << endl;
    cout << "Multiplication: " << obj1.multiplication(5, 100) << endl;
    cout << "Division: " << obj1.division(100, 50) << endl;
    cout << "Remainder: " << obj1.remainder(10, 3) << endl;
    cout << "Power: " << obj1.power(2, 10) << endl;

    obj1.factorial(5, 3);

    cout << "Fibonacci of 10: " << obj1.fabonacci(10) << endl;

    obj1.fun1();

    operation obj2 = obj1;   // copy constructor

    return 0;
}


