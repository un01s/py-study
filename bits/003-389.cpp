/*
 * leetcode 389
 *
 */

class Solution {
public:
    int funxor(string& s) {
        int f = 0;
        for (char c: s)
            f ^= c;
        return f;
    }
    char findTheDifference(string s, string t) {
        int sn = funxor(s);
        int tn = funxor(t);
        return (char)sn^tn;
    }
};

