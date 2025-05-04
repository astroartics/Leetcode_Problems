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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;

        bool ltr = true;

        if(root) q.push(root);

        while(q.size() > 0)
        {
            int size = q.size();
            vector<int> level(size);

            for(int i = 0; i < size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                int index = ltr ? i : size - 1 - i;

                level[index] = temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(level);
            ltr = !ltr;
        }
        return ans;
    }
};
