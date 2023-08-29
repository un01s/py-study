/*
 * leetcode 142
 */

type ListNode struct {
    Val int
    Next *ListNode
}

func detectCycle(head *ListNode) *ListNode {
    var slow *ListNode
    var fast *ListNode
    if head != nil && head.Next != nil {
        slow = head.Next
        fast = head.Next.Next
    } else {
        return nil
    }
    for fast != nil && fast.Next != nil {
        slow = slow.Next
        fast = fast.Next.Next
        if slow == fast {
            for head!= fast {
                head = head.Next
                fast = fast.Next
            }
            return head
        }
    }
    return nil
}
