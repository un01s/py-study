/*
 * leetcode 83
 * remove duplicates from sorted list
 *
 * double-pointer: slow and fast
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr) {
            if (fast->val != slow->val) {
                slow->next = fast;
                // move slow
                slow = slow->next;
            }
            // move fast
            fast = fast->next;
        }               
        // break
        slow->next = nullptr;
        return head; 
    }
};


