/*
 * leetcode 206
 *
 */

// recursive, the head node has to be handled separately
//
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* prev = nullptr;
        ListNode* next = reverseList(head->next);

        head->next->next = head;
        head->next = prev;
        return next;    
    }
};


