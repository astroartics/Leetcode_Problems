/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root)
    {
        if(!root)
            return 0;

        int leftMax = dfs(root->left);  
        int rightMax = dfs(root->right);  

        return (max(leftMax, rightMax) + 1);
    }

    int maxDepth(TreeNode* root) {
        int max = dfs(root);
        
        return max;
    }
};
