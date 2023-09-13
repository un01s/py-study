/*
 * leetcode 209
 *
 * sliding window (double-pointer)
 * the tricky part is to assign ans to INT32_MAX
 * at the end, if not found, use 0 as the answer.
 *
 */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT32_MAX;
        int sum = 0;
        int i = 0;
        int len = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            while (sum >= target) {
                len = j-i+1;
                ans = ans < len ? ans : len;
                sum -= nums[i++];
            }
        }
        return ans == INT32_MAX ? 0 : ans;
    }
};

