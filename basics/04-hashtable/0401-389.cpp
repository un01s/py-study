/*
 * leetcode 389
 *
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        int i;
        for (i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }    
        mp[t[i]]--;
  
        for (auto e : mp) {
            if(e.second) {
                return e.first;
            }
        }
        return t[0];
    }
};
