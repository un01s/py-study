/*
 * leetcode 125
 */

class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.size()-1;
        for (int i = 0; i < s.size(); i++) {
            if (s[j--] != s[i]) return false;
        }    
        return true;
    }
};
