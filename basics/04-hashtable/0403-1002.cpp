/*
 * leetcode 1002
 *
 */

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        int n = words[0].size();

        for (int i = 0; i < n; i++) {
            char c = words[0][i];
            int j;
            for (j = 1; j < words.size(); j++) {
                int pos = words[j].find(c);
                if (pos == string::npos) break;
                words[j].erase(pos, 1); 
            }
            if (j == words.size()) {
                res.push_back(string(1, c));
            }
        }
        return res;        
    }
};

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        vector<int> minFreq(26, INT_MAX);
        for (auto& w: words) {
            vector<int> freq(26, 0);
            for (char c: w) {
                freq[c-'a']++;
            }
            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], freq[i]);
            }
        }
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                res.push_back(string(1, i + 'a'));
            }
        }
        return res;        
    }
};
