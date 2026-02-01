#include<iostream>
using namespace std;

class school {
    int cl, n;

public:
    void fun() {
        cin >> cl >> n;
    }

    void fun1() {
        cout << cl << " " << n << endl;
    }

    void check() {
        if (n % 2 == 0) {
            cout << cl << " - class with even number of students" << endl;
        } else {
            cout << cl << " - class with odd number of students" << endl;
        }
    }
};

int main() {
    school st;
    st.fun();
    st.fun1();
    st.check();

    return 0;
}
