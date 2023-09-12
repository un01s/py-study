/*
 * leetcode 27
 * double-pointer: fast and slow
 *
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            // i is the fast pointer, j slow pointer
            if (nums[i] != val) {
                nums[j++] = nums[i];
            }
        }    
        return j;
    }
};

