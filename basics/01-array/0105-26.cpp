/*
 * leetcode 26
 * remove duplicates from sorted array
 *
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int slow = 0;
        int fast = 0;
        while (fast < n) {
            if (nums[fast] != nums[slow]) {
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
        } 
        return slow+1;
    }
};

