//https://leetcode.com/problems/binary-tree-inorder-traversal/
//https://www.youtube.com/watch?v=nzmtCFNae9k
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
    vector<int> inorderTraversal(TreeNode* root) {

    vector<int> vec;
    stack <TreeNode*>* s = new stack <TreeNode*>;
        
        while(true)
        {
            if(root)
            {
                s->push(root);
                root = root->left;
                
                
                
            }
            else
            {
                if(s->empty())
                {
                    break;
                }
                else
                {
                    root = s->top();
                    s->pop();
                    vec.push_back(root->val);
                    root = root-> right;
                }
            }
            
            
        }
        delete s;
        
        return vec;
        
        
    }
};
