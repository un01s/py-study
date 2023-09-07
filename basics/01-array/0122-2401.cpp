/*
 * leetcode 2401
 *
 * sliding window + bit operations
 *
 * use OR to combine bits 
 * use XOR to remove bits as the window shrinks
 *
 */

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int used = 0, j = 0, res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            while ((used & nums[i]) != 0)
                used ^= nums[j++];
            used |= nums[i];
            res = max(res, i - j + 1);
        }
        return res;
    }
};

