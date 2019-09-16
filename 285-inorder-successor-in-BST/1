//https://leetcode.com/problems/inorder-successor-in-bst/

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
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
       
        stack<TreeNode*> st;
        TreeNode* pre = NULL;
        bool found = false;
        while(true)
        {
            if(root)
            {
                st.push(root);
                root = root->left;
                
            }
            
            else
            {
                if(st.empty())
                {
                    break;
                }
                
                root = st.top();
                //std::cout<<root->val<<std::endl;
                if(found && st.size() >= 1)
                    return root;
                
                pre = root;
                
                if(pre == p)
                    found = true;
                
              

                st.pop();
                
                root = root->right;
                
                
            }
            
            
        }
        
   return NULL;
    }                                 
                                                            
    
};
