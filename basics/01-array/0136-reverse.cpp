/*
 * reverse an array
 *
 */

#include <iostream>
#include <vector>

using namespace std;

void printV(vector<int>& a) {
    cout << "vector:[ ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

class Solution {
public:
    void reverse(vector<int>& a) {
        int i = 0;
        int j = a.size()-1;
        while (i < j) {
            int t = a[i];
            a[i++] = a[j];
            a[j--] = t;
        }
    }
};

int main() {
    int a[] = {1, 2, 3, 4, 5};
    vector<int> v(a, a+sizeof(a)/sizeof(int));

    Solution s;
    printV(v);
    s.reverse(v);
    printV(v);
    
    return 0;
}
