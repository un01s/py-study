/*
 * leetcode 26
 * remove duplicates from sorted array
 *
 */

/*
 * double-pointer
 * s is the slow pointer
 * f is the fast pointer
 * always moves f ahead, and s keeps the index for non-duplicate
 *
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int s = 0;
        int f = 1;
        while (f < n) {
            if(nums[s] != nums[f]){
                nums[s + 1] = nums[f];
                s++;
            }
            f++;
        }
        return s + 1;
    }
};
