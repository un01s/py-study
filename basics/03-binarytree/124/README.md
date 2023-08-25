# binary tree

## traversal

```
class Solution {
public:
    int res = INT_MIN;

    int dfs(TreeNode* root) {
        if(root == nullptr) return 0;

        int left = max(0, dfs(root->left));
        int right = max(0, dfs(root->right));

        res = max(res, left+right+root->val);

        return max(left, right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return res;
    }
};
```

