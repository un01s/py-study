/*
 * leetcode 21
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* dummy = new ListNode(-1);
        ListNode* p = dummy;

        while(p1 != nullptr && p2 != nullptr) {
            if (p1->val > p2->val) {
                p->next = p2;
                p2 = p2->next;
            } else {
                p->next = p1;
                p1 = p1->next;
            }
            p = p->next;
        }
        if (p1 != nullptr) {
            p->next = p1;
        }
        if (p2 != nullptr) {
            p->next = p2;
        }
        return dummy->next;
    }
};

