#include<iostream>
#include<vector>
using namespace std;

class school {
public:
    string name;
    int roll;

    school(string n, int r) {
        name = n;
        roll = r;
    }
};

int main() {
    int n;
    cout << "enter number of students : ";
    cin >> n;

    vector<school> v;   // ❗ empty vector

    for(int i = 0; i < n; i++) {
        string name;
        int roll;
        cout << "enter name and roll : ";
        cin >> name >> roll;
        v.push_back(school(name, roll));
    }

    for(int i = 0; i < v.size(); i++) {
        cout << "name : " << v[i].name << " , roll : " << v[i].roll << endl;
    }

    return 0;
}
