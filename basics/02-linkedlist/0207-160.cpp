/*
 * leetcode 160
 * intersection of two linked lists
 *
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        while (p1 != p2) {
            // p1 moves one step, when reaching the tail of A, 
            // moves to B
            if (p1 == nullptr) p1 = headB;
            else p1 = p1->next;
            // p2 moves one step, when reaching the tail of B, 
            // moves to A linked list
            if (p2 == nullptr) p2 = headA;
            else p2 = p2->next;
        }       
        // both pointers are the same now
        //cout << "p1 = " << hex << p1 << endl;
        //cout << "p2 = " << hex << p2 << endl;

        return p1; // the intersection
    }
};
