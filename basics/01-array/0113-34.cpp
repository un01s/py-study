/*
 * leetcode 34
 *
 */

// two binary search
// 
class Solution {
public:
    int first(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (nums[mid] == target) {
                right = mid-1;
                ans = mid;
            } else if (nums[mid] > target) {
                right = mid-1;
            } else if (nums[mid] < target) {
                left = mid+1;
            }
        }
        return ans;
    }
    int last(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (nums[mid] == target) {
                left = mid+1;
                ans = mid;
            } else if (nums[mid] > target) {
                right = mid-1;
            } else if (nums[mid] < target) {
                left = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums, target));
        ans.push_back(last(nums, target));
        return ans;
    }
};

// another way
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size(), mid, left, right;
        // [start, end)
        while (start < end) {
            mid = start + (end-start)/2;
            if (nums[mid] < target) {
                start = mid+1;
            } else {
                end = mid;
            }
        }
        left = start;
        //
        start = 0;
        end = nums.size();
        // [start, end)
        while (start < end) {
            mid = start + (end-start)/2;
            if (nums[mid] > target) {
                end = mid;
            } else {
                start = mid+1;
            }
        }
        right = start;

        return left == right ? vector<int>(2, -1) : vector<int>{left, right-1};
    }
};

