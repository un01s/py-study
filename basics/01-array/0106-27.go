/*
 * leetcode 27
 *
 */

func removeElement(nums []int, val int) int {
    k := 0
    for _, num := range nums {
        if num != val {
            nums[k] = num
            k += 1
        }
    }
    return k    
}
