/*
 * leetcode 209
 *
 */

/*
 * sliding window
 * is also double-pointer
 * in the following code, the index of for-loop is the ending pointer
 * the k is the starting pointer
 * once we have a sub-array, get its len, and store the minimum one to res
 * then, the key point is to remove the starting element and increment k.
 *
 */
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int sum = 0;
        int k = 0; // starting index
        int len = 0;
        for (int i = 0; i < nums.size(); i++) {
            // i is the ending index of sliding window
            sum += nums[i];
            while(sum >= target) {
                len = i - k + 1;
                res = min(res, len);
                sum -= nums[k++];
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};

