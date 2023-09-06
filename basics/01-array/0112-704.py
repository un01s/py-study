"""
leetcode 704 in python
"""

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums)-1
        # [left, right]
        # both sides are inclusive!
        while left <= right: # <= is a must
            mid = left + (right-left)//2 ## // is correct way
            if nums[mid] > target:
                # mid is not the answer
                right = mid-1
            elif nums[mid] < target:
                # mid is not the answer for sure
                left = mid+1
            else:
                return mid
        return -1

