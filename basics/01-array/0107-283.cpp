/*
 * leetcode 283
 * 
 */

// with extra space
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> tmp(n, 0);
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) tmp[k++] = nums[i];
        }
        nums = tmp;
    }
};

// in place
class Solution2 {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
    void moveZeroes(vector<int>& nums) {
        int p = removeElement(nums, 0);
        // make sure all remaining tail are zeroes
        for (; p < nums.size(); p++) {
            nums[p] = 0;
        }
    }
};

// still two pointers
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }
        for (int i = k; i < n; i++) {
            nums[i] = 0;
        }
    }
};

// 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        while (i < n && j < n) {
            if (nums[j] != 0) {
                swap(nums[i++], nums[j++]);
            } else {
                j++;
            }
        }
    }
};


