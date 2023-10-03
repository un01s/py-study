/*
 * leetcode 1512
 * number of good pairs
 *
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                res += mp[nums[i]];
                mp[nums[i]]++;
            } else {
                mp[nums[i]] = 1;
            }
        }
        return res;    
    }
};

