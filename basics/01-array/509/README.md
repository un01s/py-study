# fibonacci number

The fibonacci number is classic recursion. It is also a simple DP.

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

## python

```python
class Solution:
    def fib(self, n: int) -> int:
        s = Solution()
        
        if n <= 1:
            return n
        else:
            return s.fib(n-1)+s.fib(n-2)
```

or, note that we can use ```self``` below.

```python
class Solution:
    def fib(self, n: int) -> int:
        if n <= 1:
            return n
        else:
            return self.fib(n-1)+self.fib(n-2)
```

## Go

```Go
func fib(n int) int {
    if n <= 1 {
        return n
    }
    return fib(n-1)+fib(n-2);
}
```

