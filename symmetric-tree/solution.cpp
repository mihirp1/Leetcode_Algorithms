
/**
https://leetcode.com/problems/same-tree/submissions/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        vector<int>t1;
        vector<int>t2;
        
        if(!p && !q)
        {
            return true;
            
        }
        
        if(!p || !q)
        {
            
            return false;
        }
        
        return (p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right ));
        
        
        
        
        
    }
};
