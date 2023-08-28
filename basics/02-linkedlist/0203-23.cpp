/*
 * leetcode 23
 * merge k sorted lists
 *
 */

// priority queue
class Solution {
public:
    //TODO review
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return nullptr;

        ListNode* dummy = new ListNode(-1);
        ListNode* p = dummy;

        auto comp = [](const ListNode* a, const ListNode* b){
            return a->val > b->val;
        };
        priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> pq(comp);

        for (ListNode* node : lists) {
            if (node != nullptr) {
                pq.push(node);
            }
        }
        while (!pq.empty()) {
            ListNode* tmp = pq.top();
            pq.pop();
            p->next = tmp;
            p = p->next;
            if (tmp->next != nullptr) {
                pq.push(tmp->next);
            }
        }
        return dummy->next;    
    }
};

// divide and conquer
// make it as merging two sorted lists
class Solution2 {
private:
    ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode dummy = new ListNode(0);
        ListNode cur = dummy;
        while (list1 != null && list2 != null) {
            if (list1.val < list2.val) {
                cur.next = list1;
                list1 = list1.next;
            } else {
                cur.next = list2;
                list2 = list2.next;
            }
            cur = cur.next;
        }
        if (list1 == null) {
            cur.next = list2;
        } else {
            cur.next = list1;
        }
        return dummy.next;
    }
public:
    ListNode mergeKLists(ListNode[] lists) {
        if (lists == null || lists.length == 0) {
            return null;
        }
        int left = 0;
        int right = lists.length - 1;
        while (right > 0) {
            while (left < right) {
                lists[left] = mergeTwoLists(lists[left], lists[right]);
                left++;
                right--;
            }
            left = 0;
        }
        return lists[0];
    }
};
