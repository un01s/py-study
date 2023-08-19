###
leetcode 1. two sum

python has List as array

###

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = len(nums)
        for i in range(l):
            n = nums[i]
            d = target - n
            if d in nums[i+1:]:
                return [i, i+nums[i+1:].index(d)+1]

