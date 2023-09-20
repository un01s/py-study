/*
 * leetcode 160
 *
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        ListNode* curB = headB;
        int lenA = 0, lenB = 0;
        // get the length of Linkedlist A
        while (curA != nullptr) {
            lenA++;
            curA = curA->next;
        }
        // get the length of Linkedlist B
        while (curB != nullptr) {
            lenB++;
            curB = curB->next;
        }

        curA = headA;
        curB = headB;
        // make A as the longer list
        if (lenB > lenA) {
            swap (lenA, lenB);
            swap (curA, curB);
        }
        // get the difference between A and B
        int gap = lenA - lenB;
        // now curA and curB at the same starting point
        while (gap--) {
            curA = curA->next;
        }
        // traverse A and B
        while (curA != nullptr) {
            if (curA == curB) {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return nullptr;        
    }
};

