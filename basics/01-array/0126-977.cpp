/*
 * leetcode 977
 * double-pointer: front and end
 *
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // nums is sorted in non-decreasing order
        // however, squaring a negative number may have a bigger number
        // than the square of a positive number
        // so double-pointer: one front and the other from end
        int i = 0, j = nums.size()-1;
        int index = j;
        vector<int> ans(j+1, 0);
        while(i <= j) {
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];
            if (a >= b) {
                ans[index--] = a;
                i++;
            } else {
                ans[index--] = b;
                j--;
            }
        }
        return ans;     
    }
};

