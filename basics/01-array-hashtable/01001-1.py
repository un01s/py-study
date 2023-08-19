###
leetcode 1. two sum

List in python as array

numbers

text(string): either inside single quotes or double quotes
  if in single quotes, you have to escape ' like \'
  if in double quotes, you have to escape " like \"
  special characters such as \n have the same meaning in both
  immutable once defined

list
  mutable
  index access


https://docs.python.org/3/tutorial/index.html

###

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = len(nums)
        for i in range(l):
            n = nums[i]
            d = target - n
            if d in nums[i+1:]:
                return [i, i+nums[i+1:].index(d)+1]

