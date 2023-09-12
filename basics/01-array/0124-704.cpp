/*
 * leetcode 704 easy
 * binary search
 * Nlog(N)
 * 
 * the condition for binary search is that
 * the array is already sorted in ascending order
 * each element in the array is unique
 *
 * if not, sort the array and does it affect the answer?
 * if there are duplicates, the answer may not be one but multiple
 *
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // the integers are sorted in ascending order
        // all integers are unique in the array
        // binary search: [i, j]
        int i = 0;
        int j = nums.size()-1;
        while (i <= j) {
            int m = i + (j-i)/2;
            int n = nums[m];
            if (n == target) return m;
            else if (n > target) j = m-1;
            else i = m+1;    
        }
        
        return -1;
    }
};

