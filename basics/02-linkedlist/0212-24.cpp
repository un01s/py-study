/*
 * leetcode 24
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        while(cur->next != nullptr && cur->next->next != nullptr) {
            ListNode* tmp = cur->next;
            ListNode* tmp2 = cur->next->next->next;
 
            cur->next = cur->next->next;
            cur->next->next = tmp;
            cur->next->next->next = tmp2;

            cur = cur->next->next; // move forward two nodes
        }
        return dummyHead->next;
    }
};

