/*
 * leetcode 35
 *
 */

// time O(n)
// space O(1)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        for(i = 0; i < n; i++) {
            if(nums[i] >= target) return i;
        }
        return i;
    }
};

// binary search
// in an ordered array where each element is unique
// 
// in this case the while loop has to maintain the invariant
// which is the range [i, j], both i and j are inclusive in the range
// to loop over the same code, it is important to maintain this invariant
// or the code has a bug.
// 
// time O(logN)
// space O(1)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        // to speed up two special cases
        if (target > nums[j]) return j+1;
        if (target < nums[i]) return i;

        while (i <= j) {
            int m = i + (j-i)/2;
            cout << "a:" << i << "-" << m << "-" <<j << endl;
            if (nums[m] == target) {
                return m;
            } else if (nums[m] > target) {
                j = m-1;
            } else {
                i = m+1;
            }
            cout << "b:" << i << "-" << m << "-" <<j << endl;
        }
        return i;    
    }
};

/*
 * cases
 * case 1
nums = [1,3,5,6]
target = 5

  i m j
a:0-1-3
b:2-1-3
a:2-2-3

Output = 2 

 * case 2
nums = [1,3,5,6]
target = 2
  i m j
a:0-1-3
b:0-1-0
a:0-0-0
b:1-0-0

Output = 1

 * case 3
nums = [1,3,5,6]
target = 7
  i m j
a:0-1-3
b:2-1-3
a:2-2-3
b:3-2-3
a:3-3-3
b:4-3-3

Output = 4
 
 *
 */
