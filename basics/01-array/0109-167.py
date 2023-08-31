"""
leetcode 167
"""

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        p1, p2 = 0, 1;
        while not (numbers[p1] + numbers[p2] == target):
            if numbers[p1] + numbers[p2] < target:
                p2+=1;
                p1+=1;
            else:
                p1-=1; 
        return [p1+1, p2+1]

