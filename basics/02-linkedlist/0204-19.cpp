/*
 * leetcode 19
 * remove n-th node from the end of list
 *
 */
class Solution {
public:
    // clever, double-pointer
    ListNode* findFromEnd(ListNode* head, int k) {
        ListNode* p1 = head;
        // first, p1 moves k steps
        for (int i = 0; i < k; i++) {
            p1 = p1->next;
        }
        // second, introduce another pointer p2
        ListNode* p2 = head;
        // now, both p1 and p2 moves together, until p1 reaches the end
        // so now both moves n-k steps, n is the total number of nodes
        //
        while (p1 != nullptr) {
            p2 = p2 -> next;
            p1 = p1 -> next;
        }
        // now, p2 is pointing at n-k+1, or k-th from the end
        return p2;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* x = findFromEnd(dummy, n + 1);
        x->next = x->next->next;

        return dummy->next;    
    }
};

