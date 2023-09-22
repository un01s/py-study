/*
 * leetcode 21
 * merge two sorted lists
 *
 */

// recursive
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        if (list1->val > list2->val) {
            //cout << "v2:" << list2->val << endl;
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        } else {
            //cout << "v1:" << list1->val << endl;
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
    }
};

/*

list1 = [1,2,4]
list2 = [1,3,4]

v1:1
v2:1
v1:2
v2:3
v1:4

Output = [1,1,2,3,4,4]

*/
