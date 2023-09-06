/*
 * leetcode 704 in Go
 * recursion
 *
 */

func search(nums []int, target int) int {
    return bSearch(nums, target, 0, len(nums)-1);    
}

func bSearch(nums []int, target int, left int, right int) int {
    // base case to stop
    if (left > right) {
        return -1
    }
    mid := left + (right-left)/2
    if (nums[mid] == target) {
        return mid
    } 
    if (nums[mid] > target) {
        return bSearch(nums, target, left, mid-1)
    }
    if (nums[mid] < target) {
        return bSearch(nums, target, mid+1, right)
    }
    return -1
}

