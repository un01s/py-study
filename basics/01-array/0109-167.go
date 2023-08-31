func twoSum(numbers []int, target int) []int {
    if len(numbers) == 2 {
        return []int{1, 2}
    } 

    left := 0
    right := len(numbers)-1
    
    for {
        sum := numbers[left] + numbers[right]
        if (target == sum) {
            return []int{left+1, right+1}
        } else if (target < sum) {
            right -= 1
        } else {
            left += 1
        }
    }
}
