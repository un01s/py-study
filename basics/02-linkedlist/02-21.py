"""
leetcode 21

this is a recursive solution in python3
"""

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1:
            return list2
        if not list2:
            return list1
        
        tmp = ListNode()
        if list1.val > list2.val:
            tmp = list2
            tmp.next = self.mergeTwoLists(list1, list2.next)
        else:
            tmp = list1
            tmp.next = self.mergeTwoLists(list1.next, list2)
        return tmp
