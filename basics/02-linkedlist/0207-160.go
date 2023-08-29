/*
 * leetcode 160
 * the idea is simple
 * traverse list A, note every node as seen
 * then traverse list B, if any node is seen before
 * return that, or no intersection
 *
 */

type ListNode struct {
    Val int
    Next *ListNode
}

func getIntersectionNode(headA, headB *ListNode) *ListNode {
    seen := make(map[*ListNode] bool)
    for n:=headA; n != nil; n = n.Next {
        seen[n] = true;
    }    
    for p:=headB; p != nil; p = p.Next {
        if (seen[p]) {
            return p
        }
    }
    return nil
}
