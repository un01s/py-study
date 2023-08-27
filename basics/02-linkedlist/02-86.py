"""
check the singly linked list

must break the original list, or there wil be circle
"""

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        before, after = ListNode(0), ListNode(0)
        before_cur, after_cur = before, after
        while head:
            if head.val < x:
                before_cur.next = head
                before_cur = before_cur.next
            else:
                after_cur.next = head
                after_cur = after_cur.next
            #
            tmp = head.next
            head.next = None
            head = tmp

        before_cur.next = after.next
        return before.next
