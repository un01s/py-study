/*
 * leetcode 904
 *
 * sliding window
 * the use of unordered_map is to store both type and count
 * the first one is the type and the second is count of that type.
 *
 */

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res = 0;
        int k = 0; // the starting index
        unordered_map<int, int> typeCnt; // only two types allowed
        for (int i = 0; i < fruits.size(); i++) {
            // i is the ending index
            typeCnt[fruits[i]]++;
            while(typeCnt.size() > 2) {
                auto it = typeCnt.find(fruits[k]);
                --it->second;
                if (it->second == 0) {
                    typeCnt.erase(it);
                }
                k++;
            }
            res = max(res, i - k + 1);
        }
        
        return res;    
    }
};

