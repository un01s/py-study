"""
leetcode 1. two sum

List in python as array

numbers

string: either inside single quotes or double quotes
  if in single quotes, you have to escape ' like \'
  if in double quotes, you have to escape " like \"
  special characters such as \n have the same meaning in both
  immutable once defined

list
  mutable
  index access
  index

https://docs.python.org/3/tutorial/index.html

comments in python is # for single line and the pair of three double-quotes
for multilines

"""

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # length of list nums
        l = len(nums)
        for i in range(l):
            n = nums[i]
            d = target - n
            # if d in the remaining array
            if d in nums[i+1:]:
                return [i, i+nums[i+1:].index(d)+1]

class Solution2:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, n in enumerate(nums):
            if target-n in nums[i+1:]:
                return [i, i+1+nums[i+1:].index(target-n)]

class Solution3:
    # use dictionary
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i, n in enumerate(nums):
            if n in dict:
                return [dict[n], i]
            else:
                dict[target-n] = i
