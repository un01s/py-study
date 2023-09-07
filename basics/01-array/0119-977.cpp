/*
 * leetcode 977
 *
 * double-pointer
 * Note how the for-loop is written to use i and j as two pointers
 * always, left <= right
 * 
 * the seconde solution uses while-loop, it is easier.
 *
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        int k = n-1;
        for (int i = 0, j = n-1; i <= j;) {
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];
            if (a < b) {
                res[k--] = b;
                j--;
            } else {
                res[k--] = a;
                i++;
            }
        }   
        return res;
    }
};

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        int k = n-1;
        int left = 0;
        int right = n-1;
        while(left <= right) {
            int a = nums[left]*nums[left];
            int b = nums[right]*nums[right];
            if (a > b) {
                res[k--] = a;
                left++;
            } else {
                res[k--] = b;
                right--;
            }
        }
        return res;
    }
};
