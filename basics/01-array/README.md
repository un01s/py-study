# array

## [1 two sum](https://leetcode.com/problems/two-sum/)

the problem gives an array of integers and one target integer. It has exactly one solution. it requires the return of both indices of two numbers whose sum equals to target.

The solution in C++ uses an unordered_map. Similarly, python could use a dictionary, and Golang uses a map.

### solution in C++

```C++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++) {
            int t = target - nums[i];
            if(m.count(t)) {
                r.push_back(m[t]);
                r.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return r;
    }
};
```

### solution in python3

```python
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i, n in enumerate(nums):
            if n in dict:
                return [dict[n], i]
            else:
                dict[target-n] = i
```

### solution in Go

```Go
func twoSum(nums []int, target int) []int {
    m := make(map[int]int)
    for i, v := range nums {
        if index, ok := m[target-v]; ok {
            return []int{i, index}
        }
        m[v] = i
    }
    panic("this test case has no solution")
}
```

## [34 find first and last position of element in sorted array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1]. You must write an algorithm with O(log n) runtime complexity.

The idea is to run binary search. the array is already sorted in non-decreasing order.

### C++

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

### Go

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

### python3

```python
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left = bisect_left(nums, target)
        right = bisect_right(nums, target)
        if left > right-1:
            return [-1, -1]
        return [left, right-1]
```

## [509 fibonacci number](https://leetcode.com/problems/fibonacci-number/)

The fibonacci number is a classic recursion. It is also a simple DP.

### C++

```C++
// space complexity O(n)
// time complexity O(2^n)
class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        return fib(n-1) + fib(n-2);
    }
};
```

Then you can use Dynamic Programming here.

```C++
// O(n) in both time and space complexity
class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        // the definition of dp[i] is pretty clear
        vector<int> dp(n+1);
        // the initialization is straightforward
        dp[0] = 0;
        dp[1] = 1;
        // the recursion formula is easy too
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n]
    }
};
```

Then you realize that there are actually only two values to maintain instead of an array.

```C++
// time complexity is still O(n)
// space complexity is reduced to O(1)
class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        int dp[2];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            int sum = dp[0] + dp[1];
            dp[0] = dp[1];
            dp[1] = sum;
        }
        return dp[1];
    }
};
```

### python

```python
class Solution:
    def fib(self, n: int) -> int:
        s = Solution()
        
        if n <= 1:
            return n
        else:
            return s.fib(n-1)+s.fib(n-2)
```

or just use ```self```

```python
class Solution:
    def fib(self, n: int) -> int:
        if n <= 1:
            return n
        else:
            return self.fib(n-1)+self.fib(n-2)
```

or DP

```python
class Solution:
    def fib(self, n: int) -> int:
        if n <= 1:
            return n
        # create dp table
        dp = [0]*(n+1)
        # init dp
        dp[0] = 0
        dp[1] = 1
        # traverse
        for i in range(2, n+1):
            dp[i] = dp[i-1] + dp[i-2]
        #
        return dp[n]
```

and,

```python
class Solution:
    def fib(self, n: int) -> int:
        if n < 2:
            return n
        # simple dp table
        dp = [0, 1]
        # traverse
        for _ in range(2, n+1):
            curr = dp[0] + dp[1]
            dp[0] = dp[1]
            dp[1] = curr
        # answer
        return dp[1]
```

### Go

```Go
func fib(n int) int {
    if n <= 1 {
        return n
    }
    return fib(n-1)+fib(n-2);
}
```

### Rust

```rust
impl Solution {
    pub fn fib(n: i32) -> i32 {
        if n < 2 {
            n
        } else {
            (2..n).fold((1, 1), |(pp, p), _| (p, pp+p)).1
        }
    }
}
```

### JavaScript

```JavaScript
/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    if (n < 2) {
        return n;
    }    
    return fib(n-1)+fib(n-2);
};
```





### 
