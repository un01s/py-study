/*
 * leetcode 876
 * double-pointer: fast and slow pointer
 * slow pointer moves one step while the fast pointer moves two steps
 * so when the fast pointer reaches the tail, the slow pointer is at
 * the middle.
 * 
 */

class Solution {
public:
    // double-pointer
    // fast and slow pointers
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
