/*
 * leetcode 21
 * merge two ordered linked lists
 *
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* p = dummy;
        ListNode* p1 = l1;
        ListNode* p2 = l2;

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
        // in case there are still remaining nodes
	if (p1 != nullptr) p->next = p1;
        if (p2 != nullptr) p->next = p2;

        return dummy->next; 
    }
};
