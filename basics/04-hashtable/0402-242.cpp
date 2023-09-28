/*
 * leetcode 242
 * valid anagram
 *
 */

// use array as a hash table
class Solution {
public:
    bool isAnagram(string s, string t) {
        int record[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            record[s[i]-'a']++;
        }    
        for (int i = 0; i < t.size(); i++) {
            record[t[i]-'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (record[i] != 0) {
                return false;
            }
        }
        return true;
    }
};

// use the unordered_map as the hash table
class Solution2 {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }    
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]]--;
        }
        for (auto x : mp) {
            if (x.second != 0) return false;
        }
        return true;
    }
};

// use sorting is a clever way
// unusual
//
class Solution3 {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t) {
            return true;
        }
        return false;
    }
};

