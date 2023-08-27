/*
 * leetcode 86
 *
 * must break original linked list
 * or there will be a circle
 *
 */

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* p = head;
        ListNode* p1 = dummy1;
        ListNode* p2 = dummy2;
        while(p != nullptr) {
            if (p->val < x) {
                p1->next = p;
                p1 = p1->next;
            } else {
                p2->next = p;
                p2 = p2->next;
            }
            // break p
            ListNode* t = p->next;
            p->next = nullptr;
            p = t;
        }
        p1->next = dummy2->next;
        return dummy1->next;    
    }
};

