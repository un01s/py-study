/*
 * leetcode 704
 * 
 */

// brute-force
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
};

// binary search
// ordered: ascending order
// all the integers in nums are unique
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        // [left, right]
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (nums[mid] > target) {
                right = mid-1; // mid is not the answer, [left, mid-1]
            } else if (nums[mid] < target) {
                left = mid+1; // mid is not answer, [mid+1, right]
            } else {
                return mid;
            }
        }
        return -1;
    }
};

// binary search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        // [left, right) this is important
        while (left < right) { // <, instead of <=
            int mid = left + (right-left)/2;
            if (nums[mid] > target) {
                right = mid; // mid is not the answer, [left, mid)
            } else if (nums[mid] < target) {
                left = mid+1; // mid is not answer, [mid+1, right)
            } else {
                return mid;
            }
        }
        return -1;
    }
};

