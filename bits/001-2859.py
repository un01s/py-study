/*
 * leetcode 2859
 * python to count bits in a number
 *
 */

class Solution:
    def sumIndicesWithKSetBits(self, nums: List[int], k: int) -> int:
        def ct(x):
            if x:
                return ct(x // 2) + x % 2
            
            return 0
        
        out = 0
        for i in range(len(nums)):
            if ct(i) == k:
                out += nums[i]
        
        return out 
