/*
 * leetcode 456
 * 132 pattern
 *
 */

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        vector<int> nK;
        vector<int> minN(n);
        minN[0] = nums[0];
        for (int i = 1; i < n; i++) {
            minN[i] = min(minN[i-1], nums[i]);
        }    
        for (int i = n-1; i > 0; i--) {
            if (nums[i] <= minN[i]) continue;
            while(!nK.empty() && nK.back() <= minN[i]) {
                nK.pop_back();
            }
            if (!nK.empty() && nK.back() < nums[i]) {
                return true;
            }
            nK.push_back(nums[i]);
        }
        return false;
    }
};

