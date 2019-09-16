//https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/*

Exactly opposite of Preorder :

1) Insert Elements in the front of vector
2) Push in left before right

*/


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> vec;
        st.push(root);
        TreeNode* f;
        
        if(!root)
            return vec;
        
        while(!st.empty())
        {
            f = st.top();
            vec.insert(vec.begin(),f->val);
            st.pop();
            
            if(f->left)
                st.push(f->left);
            
            if(f->right)
                st.push(f->right);
            
        }
        
        
        
        
     return vec;   
        
    }
};
