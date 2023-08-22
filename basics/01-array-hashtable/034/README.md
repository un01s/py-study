# leetcode 34

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1]. You must write an algorithm with O(log n) runtime complexity.

The idea is to run binary search. the array is already sorted in non-decreasing order.

## C++

```C++
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int r = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin();
        if (l == r) return {-1, -1};
        return {l, r - 1};
    }
};
```

## Go

```Go
func searchRange(nums []int, target int) []int {
    l := sort.Search(len(nums), func(i int) bool { return nums[i] >= target })
    r := sort.Search(len(nums), func(i int) bool { return nums[i] > target })
    if l == r {
        return []int{-1, -1}
    }
	
    return []int{l, r - 1}
}
```

## Python3

```Python
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left = bisect_left(nums, target)
        right = bisect_right(nums, target)
        if left > right-1:
            return [-1, -1]
        return [left, right-1]
```

