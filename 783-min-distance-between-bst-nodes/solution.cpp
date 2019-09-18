//https://leetcode.com/problems/minimum-distance-between-bst-nodes/
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
    int minDiffInBST(TreeNode* root) {
        std::stack<TreeNode*> st;
        //st.push(root);
        int prev = INT_MAX;
        int min = INT_MAX;
        
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
                else
                {
                root = st.top();
                
                
                st.pop();
                //std::cout<<"Value : "<<root->val<<std::endl;
                if(((root->val - prev) < min ) && (root->val - prev >= 0) )
                {
                    min = root->val - prev;
                    //std::cout<<"Min : "<<min<<std::endl;
                }
                    
                prev = root->val;
                
                root = root->right;
                }
                
            }
            
            
            
            
        }
        
        return min;
        
    }
};
