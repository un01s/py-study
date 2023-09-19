/*
 * leetcode 19
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* slow = dummyHead;
        ListNode* fast = dummyHead;

        while(n-- && fast != nullptr) {
            fast = fast->next;
        }        
        cout << "f:" << fast->val << endl;

        fast = fast->next;
        // fast could be null at this step
        //cout << "f:" << fast->val << endl;
        while(fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        cout << "s:" << slow->val << endl;
        slow->next = slow->next->next;

        return dummyHead->next;
    }
};
