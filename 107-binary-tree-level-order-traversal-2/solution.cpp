//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

/*
Solution for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    queue<TreeNode*> q;    
    vector<vector<int>> res;
    if(!root)
            return res;
    q.push(root);    
        
    while(!q.empty())
    {
        vector<int> vec;
        int t = q.size();
        for(int i = 0 ; i < t ; ++i)
        {   
            auto front = q.front();
            vec.push_back(front->val);
            q.pop();
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        
        
        }
        res.push_back(vec);
        
    }
      std::reverse(res.begin(),res.end());  
        
     return res;    
        
        
    }
};
