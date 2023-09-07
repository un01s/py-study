/*
 * leetcode 27 remove element
 * in-place
 *
 */

/*
 * the approach is two-pointer
 * i is the fast pointer, and k the slow pointer.
 * at the end, k is the length after removal of element whose values are val.
 * 
 * time: O(n)
 * space: O(1), no new space introduced
 *
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

