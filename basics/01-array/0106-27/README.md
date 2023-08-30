# [leetcode 17 remove element](https://leetcode.com/problems/remove-element/)

## python one-line solution

```python
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        nums[:] = [num for num in nums if num != val]
        return len(nums)
```

Python's slice notation: the key point is that the ```:stop``` value represents the first value that is not in the selected slice.

Both ```start``` and ```stop``` could be a negative number, which means it counts from the end of the array instead of the beginning. 

| python slice | meaning |
| ------------ | ------- |
| ```a[start:stop]``` | elements from start to stop-1 |
| ```a[start:]``` | elements from start to the rest of the array |
| ```a[:stop]``` | elements from the beginning to stop-1 |
| ```a[:]``` | a copy of the whole array ```a``` |
| ```a[start:step:stop]``` | start through not past stop, by step |

Here is another ASCII art to show how slices work:

```
 +---+---+---+---+---+---+
 | P | y | t | h | o | n |
 +---+---+---+---+---+---+
   0   1   2   3   4   5   6
  -6  -5  -4  -3  -2  -1
```

