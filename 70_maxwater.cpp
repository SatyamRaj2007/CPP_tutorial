#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int maxarea = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int width = j - i;
            int height = min(v[i], v[j]);
            int area = width * height;
            maxarea = max(maxarea, area);
        }
    }

    cout << "Maximum Area = " << maxarea;
    return 0;
}
