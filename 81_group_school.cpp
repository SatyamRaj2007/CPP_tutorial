#include<iostream>
using namespace std;

class school {
    int cl, n;
    int nt = 15;

public:
    school() {
        cin >> cl >> n;

        if (n % 2 == 0)
            cout << cl << " - class with even number of students" << endl;
        else
            cout << cl << " - class with odd number of students" << endl;
    }

    void display() {
        cout << "Class: " << cl << ", Students: " << n << endl;
    }

    int getNt() {   
        return nt;
    }
};

int main() {
    school st;
    st.display();
    cout << st.getNt() << endl;

    return 0;
}

