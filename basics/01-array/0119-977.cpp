/*
 * leetcode 977
 *
 * double-pointer
 * Note how the for-loop is written to use i and j as two pointers
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

