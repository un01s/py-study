# binary tree

* traverse the tree once to get the information for the answer to the problem?

* define a recursive function to deal with the sub-tree so that the problem of the whole tree could be solved?

In the end, both methods have to deal with one node in a binary tree. What to do with this node? when or where to deal with it, namely pre-order, in-order or post-order?

From the binary tree, the methods of dynamic programming, back tracking, divide and conquer, and graph could all have its idea.

```C++
void traverse(TreeNode* root) {
    if (root == nullptr) return;

    // pre-order
    traverse(root->left);
    // in-order
    traverse(root->right);
    // post-order
}
```

For the array, both iterative and recursive traversal could be illustrated as follows.

```C++
// iterative
void traverse(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        // process each element in the array
    }
}

// recursive
void traverse(vector<int>& a, int i) {
    if (i == a.size()) return;

    // pre-order
    traverse(a, i+1);
    // post-order
}
```

To traverse a linked-list, either iterative or recursive is OK.

```C++
// iterative
void traverse(ListNode* head) {
    for (ListNode* p = head; p != nullptr; p = p->next) {
        // process current node
    }
}

// recursive
void traverse(ListeNode* head) {
    if (head != nullptr) return;

    // pre-order
    traverse(head->next);
    // post-order
}
```

So for the binary tree, most often the recursive traversal is applied. So the pre-order traversal and post-order traversal is according to the order before or after recursion. Pre-order is just when the code enters a node or an element. Post-order is when the code is going to leave the node.

How to print all values of the nodes on a singly linked list?

```C++
void traverse(ListNode* head) {
    if (head == nullptr) return;

    traverse(head->next);
    // print the value of current node
    cout << head->val << endl;
}
```

So pre-order, in-order, and post-order traversal is really about the time to process one node.

| traversal order | current node |
| --------------- | ------------ |
| pre-order | handle the node first, then left-subtree and right-subtree |
| in-order | first left-subtree, handle the node, then right-subtree |
| post-order | left-subtree first,and right-subtree, then handle the node |


