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
    int minDepth(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        
        if(!root) return 0;

        q.push({root, 1});

        while(!q.empty())
        {
            auto [temp, depth] = q.front();
            q.pop();

            if(!temp->left && !temp->right) // return when the first leaf node is found. 
            {
                return depth;
            }

            if(temp->left)
            {
                q.push({temp->left, depth + 1});
            } 
            if(temp->right)
            {
                q.push({temp->right, depth + 1});
            } 
        }
        cout << min(left,right);
        
        
        return 0;
    }
};
