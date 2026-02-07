#include <iostream>
using namespace std;

class Solution {
private:
    int n;

public:
    Solution(int x) {
        n=x;
    }
    Solution(Solution &s) {
        n=s.n;
    }
    int sum(int x) {
        return n+x;
    }
};
int main() {
    Solution obj1(10);    
    Solution obj2=obj1;  
    cout<<"Sum using copy constructor: "<<obj2.sum(5);

    return 0;
}

