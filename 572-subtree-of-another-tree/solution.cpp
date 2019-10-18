//https://leetcode.com/problems/subtree-of-another-tree/


/**
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        if(!t)
            return true;
        
        if(!s)
            return false;
        
        if(identical(s,t))
            return true;
        

        return(isSubtree(s->right,t) || isSubtree(s->left,t));

    }
    
    bool identical(TreeNode* one, TreeNode* two)
    {
        if(!one && !two)
        {
            return true;
        }
        
        if(!one || !two)
        {
            return false;
        }
        
        return ((one->val == two->val) && identical(one->left,two->left) && identical(one->right,two->right));
        
        
        
    }
    
    
    
};
