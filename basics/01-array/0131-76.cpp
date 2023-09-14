/*
 * leetcode 76
 */

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> mp(128, 0);
        int count = t.size();
        for (int i = 0; i < count; i++) {
            mp[t[i]]++;
        }    
        int begin = 0, end = 0, d = INT_MAX, head = 0;
        while(end < s.size()) {
            if (mp[s[end++]]-- > 0) {
                count--;
            }
            while (count == 0) {
                if (end-begin < d) {
                    head = begin;
                    d = end - head;
                }
                if (mp[s[begin++]]++ == 0) {
                    count++;
                }
            }
        }
        return d == INT_MAX ? "" : s.substr(head, d);
    }
};

