//https://leetcode.com/problems/binary-tree-preorder-traversal/
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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        vector<int> pre;
        if(!root)
            return pre;
        
        while(!st.empty())
        {
            
            auto temp = st.top();
            st.pop();
            //std::cout<<temp->val;
            pre.push_back(temp->val);
            if(temp->right)
            st.push(temp->right);
            if(temp->left)
            st.push(temp->left);
        }
        
     return pre;   
    }
};
