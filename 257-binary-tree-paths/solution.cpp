//https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> binaryTreePaths(TreeNode* root) {

        
        vector<string> vec;
        if(!root)
            return vec;
        return (traverse(root,"",vec));

    }
    
    vector<string>& traverse(TreeNode* root,string temp,vector<string>& vec )
    {
        if(root && (root->left || root->right))
            temp += std::to_string(root->val) + "->";
        
        else if(root && !(root->left) && !(root->right))
            temp += std::to_string(root->val);
        
        if(root->left)
            traverse(root->left, temp, vec);
            
        if(root->right)
            traverse(root->right, temp, vec);
        
        if(!root->left && !root->right)
        {
            vec.push_back(temp);
            temp = "";
        }
        return vec;
    }
    
    
};
