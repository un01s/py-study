/*
 * leetcode 206
 * reverse a singly linked list
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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp;
        ListNode* cur = head;
        ListNode* pre = nullptr;
        while(cur) {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};

