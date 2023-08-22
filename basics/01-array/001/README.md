# leetcode 1. two sum

the problem gives an array of integers and one target integer. It has exactly one solution. it requires the return of both indices of two numbers whose sum equals to target.

The solution in C++ uses an unordered_map. Similarly, python could use a dictionary, and Golang uses a map.

## solution in C++

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

## solution in python3

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

## solution in Go

```go
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
 
