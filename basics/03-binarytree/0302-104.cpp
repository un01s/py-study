/*
 * leetcode 104
 * maximum depth of binary tree
 *
 * use one variable to record the depth
 *
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int d = max(left, right)+1;

        return d;    
    }
};

