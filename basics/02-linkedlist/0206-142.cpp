/*
 * leetcode 142
 * detect cycle: linked list cycle II
 *
 * initially both pointers are set to the head of the linked list
 * the fast pointer moves twice as fast as the slow pointer
 * if there is a cycle, then eventually the fast pointer will catch up with 
 * the slow pointer
 * if there is no cycle, the fast pointer will reach the end of the list
 *
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next; // two steps
            slow = slow->next; // one step
            if (fast == slow) break;
        }
        if (fast == nullptr || fast->next == nullptr) {
            // no cycle
            return nullptr;
        }
        // restart for slow
        slow = head;
        while(slow != fast) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

