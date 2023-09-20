/*
 * leetcode 148
 * sort list
 */

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> a;
        while (head != nullptr) {
            a.push_back(head->val);
            head = head->next;
        }    
        sort(a.begin(), a.end(), greater<int>());

        ListNode* start = nullptr;
        for (int i = 0; i < a.size(); i++) {
            ListNode *tmp = new ListNode(a[i]);
            tmp->next = start;
            start = tmp;
        }
        return start;
    }
};
