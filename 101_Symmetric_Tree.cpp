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
    bool symmetric(TreeNode* t1, TreeNode* t2)
    {
        if(t1 == NULL && t2 == NULL)
            return true;
        
        if(t1 == NULL || t2 == NULL)
            return false;

        return symmetric(t1->left, t2->right) && symmetric(t1->right, t2->left) && (t1->val == t2->val);
    }
    
    bool isSymmetric(TreeNode* root) {

        if(!root->left && !root->right) return true;

        return symmetric(root->left, root->right);

        // Iterative approach

        // queue<TreeNode*> l, r;
        // if(root->left) l.push(root->left);
        // if(root->right) r.push(root->right);

        // while(l.size() > 0 && r.size() > 0)
        // {
        //     TreeNode* t1 = l.front();
        //     TreeNode* t2 = r.front();
        //     l.pop();
        //     r.pop();

        //     if(t1 == NULL && t2 == NULL)
        //         continue;
        //     if(t1 == NULL || t2 == NULL)
        //         return false;
        //     if(t1->val != t2->val)  
        //         return false;

        //     l.push(t1->left);
        //     l.push(t1->right);
        //     r.push(t2->right);
        //     r.push(t2->left);
        // }

        // return l.size() == r.size();
    }
};
