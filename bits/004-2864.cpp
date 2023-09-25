/*
 * leetcode 2864
 *
 */

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0, n = s.size();
        
        for (int i = 0; i < n; ++i) 
            ones += s[i] == '1';
 
        return string(ones - 1, '1') + string(n - ones, '0') + "1";
    }
};

