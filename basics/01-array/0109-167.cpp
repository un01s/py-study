/*
 * leetcode 167
 * two sum II
 *
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;

        while (left < right) {
            int s = numbers[left] + numbers[right];
            if (s == target) {
                break;
            } else if (s > target){
                right--;
            } else {
                left++;
            }
        }
        return {left+1, right+1};
    }
};

