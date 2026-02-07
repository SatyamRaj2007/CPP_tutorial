#include <iostream>
#include <vector>
using namespace std;

class solution {
private:
    int n;
    vector<int> v;
    vector<string> names;
public:
    void id_function() {
        cin>>n;
        v.resize(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }
    }
    void id_function2() {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    void name_function() {
        names.resize(n);
        for (int i=0;i<n;i++) {
            cin>>names[i];
        }
    }

    void name_function2() {
        for (string name : names) {
            cout <<name<<" ";
        }
        cout<<endl;
    }
};

int main() {
    solution s;
    s.id_function();
    s.id_function2();
    s.name_function();
    s.name_function2();
    return 0;
}
