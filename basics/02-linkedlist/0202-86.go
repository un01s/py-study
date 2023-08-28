/*
 *
 */

type ListNode struct {
    Val int
    Next *ListNode
}

func partition(head *ListNode, x int) *ListNode {
    new_head := &ListNode{0,head}
    pos := new_head
    prev := new_head
    for head != nil{
        if head.Val >= x{
            prev = prev.Next
            head = head.Next
        }else if pos == prev{
            pos = pos.Next
            prev = prev.Next
            head = head.Next
        }else{
            head_next := head.Next
            prev.Next = head_next
            pos_next := pos.Next
            pos.Next = head
            head.Next = pos_next
            head = head_next
            pos = pos.Next
        }
    }
    return new_head.Next    
}

